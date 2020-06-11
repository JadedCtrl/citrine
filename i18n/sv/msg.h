#define CTR_MSG_LANG_CODE "sv"
#define CTR_MSG_WELCOME   "Citrine/SV\n"
#define CTR_MSG_COPYRIGHT "Gabor de Mooij ©, Licensed BSD\n"
#define CTR_MSG_USAGE_G   "Inte tillräckligt med argument Användande:: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "Inte tillräckligt med argument Användande:: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX        " %s  på nätet: %d "
#define CTR_ERR_TOKBUFF    "Token Buffer Exausted Tokens får inte överstiga 255 byte"
#define CTR_ERR_OOM        "Slut på minne"
#define CTR_ERR_SYNTAX     "Analysfel oväntat %s  ( %s : %d )"
#define CTR_ERR_LONG       "Meddelandet är för länge"
#define CTR_ERR_EXP_COLON "Förväntad [:].\n"
#define CTR_ERR_EXP_MSG "Förväntad [meddelande].\n"
#define CTR_ERR_EXP_PCLS  "Förväntad [)].\n"
#define CTR_ERR_EXP_DOT    "Förväntad slut på raden"
#define CTR_ERR_EXP_KEY    "Nyckeln ska alltid följas av ett fastighetsnamn!"
#define CTR_ERR_EXP_VAR    "Pekande hand ska alltid följas av variabel!"
#define CTR_ERR_EXP_RCP    "Förväntade en meddelandemottagare"
#define CTR_ERR_EXP_MSG2   "Mottagaren kan inte följas av kolon"
#define CTR_ERR_INV_LAS    "Ogiltig vänsteruppgift"
#define CTR_ERR_EXP_BLK   "Förväntad [Koda]."
#define CTR_ERR_EXP_ARR   "Förväntad [Lista]."
#define CTR_ERR_EXP_NUM   "Förväntad [Siffra]."
#define CTR_ERR_EXP_STR   "Förväntad [Sträng]."
#define CTR_ERR_DIVZERO    "Dividera med noll"
#define CTR_ERR_BOUNDS     "Index utanför gränserna"
#define CTR_ERR_REGEX      "Det gick inte att kompilera regelbundet uttryck"
#define CTR_ERR_SIPHKEY    "Nyckeln måste vara exakt 16 byte lång"
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN       "Det gick inte att öppna: %s "
#define CTR_ERR_DELETE     "Det går inte att radera"
#define CTR_ERR_FOPENED    "Filen har redan öppnats"
#define CTR_ERR_SEEK       "Sökning misslyckades"
#define CTR_ERR_LOCK       "Det går inte att låsa"
#define CTR_ERR_RET        "Ogiltigt returuttryck"
#define CTR_ERR_SEND       "Det går inte att skicka meddelande till mottagaren av typen: %d "
#define CTR_ERR_KEYINX     "Nyckelindex uttömt"
#define CTR_ERR_ANOMALY    "Detekterad meddelandenivåavvikelse"
#define CTR_ERR_UNCAUGHT   "Fel som inte hämtats har inträffat"
#define CTR_ERR_NODE       "Runtime Error Ogiltig analysnod: %d  %s "
#define CTR_ERR_MISSING    "Saknad neknod"
#define CTR_ERR_FOPEN      "Fel vid öppning av filen"
#define CTR_ERR_RNUM  "Måste återvända [Siffra].\n"
#define CTR_ERR_RSTR  "Måste återvända [Sträng].\n"
#define CTR_ERR_RBOOL "Måste återvända [Boolean].\n"
#define CTR_ERR_NESTING    "För många kapslade samtal"
#define CTR_ERR_KNF        "Nyckel hittades inte:"
#define CTR_ERR_ASSIGN     "Kan inte tilldela en odefinierad variabel:"
#define CTR_ERR_EXEC       "Det gick inte att utföra kommandot"
#define CTR_MSG_DSC_FILE  "file"
#define CTR_MSG_DSC_FLDR  "folder"
#define CTR_MSG_DSC_SLNK  "symbolic link"
#define CTR_MSG_DSC_CDEV  "character device"
#define CTR_MSG_DSC_BDEV  "block device"
#define CTR_MSG_DSC_SOCK  "socket"
#define CTR_MSG_DSC_NPIP  "named pipe"
#define CTR_MSG_DSC_OTHR  "other"
#define CTR_MSG_DSC_TYPE  "type"
#define CTR_TERR_LMISMAT  "Language mismatch."
#define CTR_TERR_LONG     "Translation error, message too long."
#define CTR_TERR_DICT     "Error opening dictionary."
#define CTR_TERR_KMISMAT  "Error: key mismatch %s %s on line %d\n"
#define CTR_TERR_ELONG    "Dictionary entry too long."
#define CTR_TERR_AMWORD   "Ambiguous word in dictionary: %s."
#define CTR_TERR_AMTRANS  "Ambiguous translation in dictionary: %s."
#define CTR_TERR_TMISMAT  "Keyword/Binary mismatch:"
#define CTR_TERR_BUFF     "Unable to copy translation to buffer."
#define CTR_TERR_WARN     "Warning: Not translated: "
#define CTR_TERR_TOK      "Token length exceeds maximum buffer size."
#define CTR_TERR_PART      "En del av sökordmeddelandetoken överskrider buffertgränsen"
#define CTR_TERR_COLONS   "Different no. of colons."
#define CTR_MSG_ERROR      "Fel"
#define CTR_MERR_OOM      "Slut på minne Det gick inte att tilldela %lu  byte\n"
#define CTR_MERR_MALLOC   "Slut på minne Det gick inte att tilldela %lu  byte (malloc). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
#define CTR_STDDATEFRMT   "%Y-%m-%d %H:%M:%S"