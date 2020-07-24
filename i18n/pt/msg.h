#define CTR_MSG_LANG_CODE "pt"
#define CTR_MSG_WELCOME   "Citrine/PT\n"
#define CTR_MSG_COPYRIGHT "Gabor de Mooij ©, Licensed BSD\n"
#define CTR_MSG_USAGE_G   "Argumentos insuficientes Uso:: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "Argumentos insuficientes Uso:: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX        " %s  on-line: %d "
#define CTR_ERR_TOKBUFF    "Buffer de token esgotado Tokens não podem exceder 255 bytes"
#define CTR_ERR_OOM        "Fora da memória"
#define CTR_ERR_SYNTAX     "Erro de análise %s  inesperado ( %s : %d )"
#define CTR_ERR_LONG       "Mensagem muito longa"
#define CTR_ERR_EXP_COLON "Esperado [:].\n"
#define CTR_ERR_EXP_MSG "Esperado [mensagem].\n"
#define CTR_ERR_EXP_PCLS  "Esperado [)].\n"
#define CTR_ERR_EXP_DOT    "Fim de linha esperado"
#define CTR_ERR_EXP_KEY    "A chave deve sempre ser seguida por um nome de propriedade!"
#define CTR_ERR_EXP_VAR    "Ponteiro sempre deve ser seguido por variável!"
#define CTR_ERR_EXP_RCP    "Esperava um destinatário da mensagem"
#define CTR_ERR_EXP_MSG2   "O destinatário não pode ser seguido por dois pontos"
#define CTR_ERR_INV_LAS    "Atribuição à esquerda inválida"
#define CTR_ERR_EXP_BLK   "Esperado [Código]."
#define CTR_ERR_EXP_ARR   "Esperado [Lista]."
#define CTR_ERR_EXP_NUM   "Esperado [Número]."
#define CTR_ERR_EXP_STR   "Esperado [Corda]."
#define CTR_ERR_DIVZERO    "Divisão por zero"
#define CTR_ERR_BOUNDS     "Índice fora dos limites"
#define CTR_ERR_REGEX      "Não foi possível compilar a expressão regular"
#define CTR_ERR_SIPHKEY    "A chave deve ter exatamente 16 bytes"
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN       "Não foi possível abrir: %s "
#define CTR_ERR_DELETE     "Não foi possível excluir"
#define CTR_ERR_FOPENED    "O arquivo já foi aberto"
#define CTR_ERR_SEEK       "A busca falhou"
#define CTR_ERR_LOCK       "Não foi possível bloquear"
#define CTR_ERR_RET        "Expressão de retorno inválida"
#define CTR_ERR_SEND       "Não é possível enviar mensagem para o destinatário do tipo: %d "
#define CTR_ERR_KEYINX     "Índice de chaves esgotado"
#define CTR_ERR_ANOMALY    "Anomalia no nível da mensagem detectada"
#define CTR_ERR_UNCAUGHT   "Ocorreu um erro não corrigido"
#define CTR_ERR_NODE       "Erro de tempo de execução Nó de análise inválido: %d  %s "
#define CTR_ERR_MISSING    "Nó de análise ausente"
#define CTR_ERR_FOPEN      "Erro ao abrir o arquivo"
#define CTR_ERR_RNUM  "Deve retornar [Número].\n"
#define CTR_ERR_RSTR  "Deve retornar [Corda].\n"
#define CTR_ERR_RBOOL "Deve retornar [Boleano].\n"
#define CTR_ERR_NESTING    "Muitas chamadas aninhadas"
#define CTR_ERR_KNF        "Chave não encontrada:"
#define CTR_ERR_ASSIGN     "Não é possível atribuir a variável indefinida:"
#define CTR_ERR_EXEC       "Não foi possível executar o comando"
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
#define CTR_TERR_PART      "Parte do token de mensagem da palavra-chave excede o limite do buffer"
#define CTR_TERR_COLONS   "Different no. of colons."
#define CTR_MSG_ERROR      "Erro"
#define CTR_MERR_OOM      "Fora da memória Falha ao alocar %lu  bytes\n"
#define CTR_MERR_MALLOC   "Fora da memória Falha ao alocar %lu  bytes (malloc). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
#define CTR_STDDATEFRMT   "%Y-%m-%d %H:%M:%S"