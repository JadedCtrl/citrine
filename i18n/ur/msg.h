#define CTR_MSG_LANG_CODE "ur"
#define CTR_MSG_WELCOME   "Citrine/UR\n"
#define CTR_MSG_COPYRIGHT "Gabor de Mooij ©, Licensed BSD\n"
#define CTR_MSG_USAGE_G   "کافی دلائل نہیں ہیں۔ استعمال:: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "کافی دلائل نہیں ہیں۔ استعمال:: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX       "%s on line: %d. \n"
#define CTR_ERR_TOKBUFF    "ٹوکن بفر ختم ہوگیا۔ ٹوکن 255 بائٹس سے زیادہ نہیں ہوسکتے ہیں"
#define CTR_ERR_OOM        "میموری سے باہر"
#define CTR_ERR_SYNTAX    "Parse error, unexpected %s ( %s: %d )\n"
#define CTR_ERR_LONG       "پیغام بہت لمبا ہے۔"
#define CTR_ERR_EXP_COLON "متوقع [:].\n"
#define CTR_ERR_EXP_MSG "متوقع [پیغام].\n"
#define CTR_ERR_EXP_PCLS  "متوقع [)].\n"
#define CTR_ERR_EXP_DOT    "لائن کا اختتام متوقع"
#define CTR_ERR_EXP_KEY    "کلید کا ہمیشہ پراپرٹی کا نام ہونا چاہئے!"
#define CTR_ERR_EXP_VAR    "اشارہ کرنے والے ہاتھ کا ہمیشہ متغیر ہونا چاہئے!"
#define CTR_ERR_EXP_RCP    "پیغام وصول کنندہ کی توقع ہے۔"
#define CTR_ERR_EXP_MSG2   "وصول کنندہ کے بعد بڑی آنت نہیں ہوسکتی ہے۔"
#define CTR_ERR_INV_LAS    "بایاں ہاتھ کی غلط تفویض"
#define CTR_ERR_EXP_BLK   "متوقع [کوڈ]."
#define CTR_ERR_EXP_ARR   "متوقع [فہرست]."
#define CTR_ERR_EXP_NUM   "متوقع [نمبر]."
#define CTR_ERR_EXP_STR   "متوقع [سٹرنگ]."
#define CTR_ERR_DIVZERO    "صفر سے تقسیم"
#define CTR_ERR_BOUNDS     "حدود سے باہر انڈیکس۔"
#define CTR_ERR_REGEX      "باقاعدہ اظہار مرتب نہیں کیا جاسکا۔"
#define CTR_ERR_SIPHKEY    "کلید بالکل 16 بائٹ لمبا ہونی چاہئے۔"
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN      "Unable to open: %s."
#define CTR_ERR_DELETE     "حذف کرنے سے قاصر ہے۔"
#define CTR_ERR_FOPENED    "فائل پہلے ہی کھولی جاچکی ہے۔"
#define CTR_ERR_SEEK       "تلاش ناکام"
#define CTR_ERR_LOCK       "لاک کرنے سے قاصر۔"
#define CTR_ERR_RET        "غلط واپسی کا تاثرات۔"
#define CTR_ERR_SEND      "Cannot send message to receiver of type: %d \n"
#define CTR_ERR_KEYINX     "کلیدی اشاریہ ختم ہو گیا۔"
#define CTR_ERR_ANOMALY    "بے ضابطگی سے میسج لیول کا پتہ چلا۔"
#define CTR_ERR_UNCAUGHT   "غیر پیچیدہ خرابی واقع ہوئی ہے۔"
#define CTR_ERR_NODE      "Runtime Error. Invalid parse node: %d %s \n"
#define CTR_ERR_MISSING    "پارس نوڈ غائب ہے"
#define CTR_ERR_FOPEN      "فائل کھولتے وقت خامی۔"
#define CTR_ERR_RNUM  "لوٹنا ہوگا [نمبر].\n"
#define CTR_ERR_RSTR  "لوٹنا ہوگا [سٹرنگ].\n"
#define CTR_ERR_RBOOL "لوٹنا ہوگا [بولین].\n"
#define CTR_ERR_NESTING    "بہت سے گھریلو کالیں۔"
#define CTR_ERR_KNF        "چابی نہیں ملی:"
#define CTR_ERR_ASSIGN     "غیر متعینہ متغیر کو تفویض نہیں کیا جاسکتا:"
#define CTR_ERR_EXEC       "کمانڈ پر عملدرآمد کرنے سے قاصر ہے۔"
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
#define CTR_TERR_PART      "مطلوبہ الفاظ کے پیغام کے ٹوکن کا حصہ بفر کی حد سے تجاوز کر گیا ہے۔"
#define CTR_TERR_COLONS   "Different no. of colons."
#define CTR_MSG_ERROR      "خرابی"
#define CTR_MERR_OOM      "Out of memory. Failed to allocate %lu bytes.\n"
#define CTR_MERR_MALLOC   "Out of memory. Failed to allocate %lu bytes (malloc failed). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
#define CTR_STDDATEFRMT   "%Y-%m-%d %H:%M:%S"