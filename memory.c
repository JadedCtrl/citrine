#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <math.h>
#include <stdint.h>
#include "citrine.h"

/**
 * Heap Object, represents dynamic memory.
 */

struct memBlock {
	size_t size;
	void* space;
};

typedef struct memBlock memBlock;

memBlock*  memBlocks = NULL;
size_t     numberOfMemBlocks = 0;
size_t     maxNumberOfMemBlocks = 0;

/**
 * Heap allocate raw memory
 * Allocates a slice of memory having the specified size in bytes.
 * The memory will be zeroed (calloc is used).
 *
 * If the specified number of bytes cannot be allocated, the program
 * will end with exit 1.
 *
 * If the specified number of bytes causes the total number of allocated
 * bytes to exceed the GC thresold, the garbage collector will attempt to free
 * memory.
 *
 * If the specified number of bytes causes the total number of allocated
 * bytes to exceed the predetermined memory limit, the program will exit with
 * return code 1.
 *
 * This function will track the allocated bytes to monitor memory
 * management.
 *
 * @param uintptr_t size memory size
 *
 * @return void*
 */
void* ctr_heap_allocate( size_t size ) {

	void* sliceOfMemory;

	/* Check whether we can afford to allocate this much */
	ctr_gc_alloc += size;

	if (ctr_gc_memlimit < ctr_gc_alloc) {
		printf( "Out of memory. Failed to allocate %lu bytes.\n", size );
		exit(1);
	}

	/* Perform allocation and check result */
	sliceOfMemory = calloc( size, 1 );

	if ( sliceOfMemory == NULL ) {
		printf( "Out of memory. Failed to allocate %lu bytes (malloc failed). \n", size );
	}

	/* Perform garbage collection cycle */
	if ( ( ctr_gc_mode & 1 ) && ctr_gc_alloc > ( ctr_gc_memlimit * 0.8 ) ) {
		ctr_gc_internal_collect();
	}

	return sliceOfMemory;
}


/**
 * Allocates memory on heap and tracks it for clean-up when
 * the program ends.
 */
void* ctr_heap_allocate_tracked( size_t size ) {
	void* space;
	size_t old_size;
	space = ctr_heap_allocate( size );
	if ( numberOfMemBlocks >= maxNumberOfMemBlocks ) {
		if ( memBlocks == NULL ) {
			memBlocks = ctr_heap_allocate( sizeof( memBlock ) );
			maxNumberOfMemBlocks = 1;
		} else {
			old_size = maxNumberOfMemBlocks;
			maxNumberOfMemBlocks += 10;
			memBlocks = ctr_heap_reallocate( memBlocks, ( sizeof( memBlock ) * ( maxNumberOfMemBlocks ) ), ( sizeof( memBlock) * old_size ) );
		}
	}
	memBlocks[ numberOfMemBlocks ].space = space;
	memBlocks[ numberOfMemBlocks ].size  = size;
	numberOfMemBlocks ++;
	return space;
}

/**
 * Reallocates tracked memory on heap.
 * You need to provide a tracking ID.
 */
void* ctr_heap_reallocate_tracked( size_t tracking_id, size_t size, size_t old_size ) {
	void* space;
	size_t recorded_size;
	space = memBlocks[ tracking_id ].space;
	recorded_size = memBlocks[ tracking_id ].size;
	space = ctr_heap_reallocate( space, size, old_size );
	memBlocks[ tracking_id ].space = space;
	memBlocks[ tracking_id ].size  = size;
	return space;
}

/**
 * Returns the latest tracking ID after tracking allocation.
 */
size_t ctr_heap_get_latest_tracking_id() {
	return numberOfMemBlocks - 1;
}

/**
 * Frees all tracked memory blocks.
 */
void ctr_heap_free_rest() {
	size_t i;
	for ( i = 0; i < numberOfMemBlocks; i ++) {
		ctr_heap_free( memBlocks[i].space, memBlocks[i].size );
	}
	ctr_heap_free( memBlocks, ( maxNumberOfMemBlocks * sizeof( memBlock ) ) );
}


/**
 * Heap free memory
 *
 * Frees the memory pointed to by the specified pointer and deducts
 * the specified size from the allocation bookkeepting variable.
 *
 * @param void*     ptr  pointer to memory to be freed
 * @param uintptr_t size number of bytes to deduct from usage counter
 *
 * @return void
 */
void ctr_heap_free( void* ptr, size_t size ) {
	free( ptr );
	ctr_gc_alloc -= size;
}

/**
 * Memory Management Adjust Memory Block Size (re-allocation)
 * Re-allocates Memory Block.
 *
 * Given the old pointer, the desired size, the original size and
 * the purpose for allocation, this function will attempt to
 * re-allocate the memory block.
 */
void* ctr_heap_reallocate(void* oldptr, size_t size, size_t old_size ) {
	char* nptr;
	ctr_gc_alloc = ( ctr_gc_alloc - old_size ) + size;
	nptr = realloc( oldptr, size );
	return (void*) nptr;
}
