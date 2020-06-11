#define CTR_MSG_LANG_CODE "he"
#define CTR_MSG_WELCOME   "Citrine/HE\n"
#define CTR_MSG_COPYRIGHT "Gabor de Mooij ©, Licensed BSD\n"
#define CTR_MSG_USAGE_G   "אין מספיק ויכוחים שימוש:: ctr -g file1.h file2.h"
#define CTR_MSG_USAGE_T   "אין מספיק ויכוחים שימוש:: ctr -t d.dict program.ctr"
#define CTR_ERR_LEX       "%s on line: %d. \n"
#define CTR_ERR_TOKBUFF    "מאגר אסימון מוגזם אסימונים לא יעלו על 255 בתים"
#define CTR_ERR_OOM        "מתוך הזיכרון"
#define CTR_ERR_SYNTAX    "Parse error, unexpected %s ( %s: %d )\n"
#define CTR_ERR_LONG       "הודעה ארוכה מדי"
#define CTR_ERR_EXP_COLON "צפוי [:].\n"
#define CTR_ERR_EXP_MSG "צפוי [הודעה].\n"
#define CTR_ERR_EXP_PCLS  "צפוי [)].\n"
#define CTR_ERR_EXP_DOT    "סוף קו צפוי"
#define CTR_ERR_EXP_KEY    "אחרי מפתח תמיד צריך להיות שם מאפיין!"
#define CTR_ERR_EXP_VAR    "יד מצביעת תמיד צריכה להיות אחריה משתנה!"
#define CTR_ERR_EXP_RCP    "צפה לנמען הודעה"
#define CTR_ERR_EXP_MSG2   "לא יכול אחריו לקבל את המעי הגס"
#define CTR_ERR_INV_LAS    "הקצאה מאחור לא חוקית"
#define CTR_ERR_EXP_BLK   "צפוי [קוד]."
#define CTR_ERR_EXP_ARR   "צפוי [רשימה]."
#define CTR_ERR_EXP_NUM   "צפוי [מספר]."
#define CTR_ERR_EXP_STR   "צפוי [מחרוזת]."
#define CTR_ERR_DIVZERO    "חלוקה באפס"
#define CTR_ERR_BOUNDS     "מדד מחוץ לתחום"
#define CTR_ERR_REGEX      "לא ניתן היה לחבר ביטוי רגיל"
#define CTR_ERR_SIPHKEY    "המפתח חייב להיות באורך 16 בתים בדיוק"
#define CTR_SYM_OBJECT    "[Object]"
#define CTR_SYM_BLOCK     "[Block]"
#define CTR_SYM_FILE      "[File (no path)]"
#define CTR_ERR_OPEN      "Unable to open: %s."
#define CTR_ERR_DELETE     "לא ניתן למחוק"
#define CTR_ERR_FOPENED    "הקובץ כבר נפתח"
#define CTR_ERR_SEEK       "החיפוש נכשל"
#define CTR_ERR_LOCK       "לא ניתן לנעול"
#define CTR_ERR_RET        "ביטוי חזרה לא חוקי"
#define CTR_ERR_SEND      "Cannot send message to receiver of type: %d \n"
#define CTR_ERR_KEYINX     "מדד המפתח מותש"
#define CTR_ERR_ANOMALY    "זוהה חריגה ברמת ההודעות"
#define CTR_ERR_UNCAUGHT   "אירעה שגיאה שלא נכלאה"
#define CTR_ERR_NODE      "Runtime Error. Invalid parse node: %d %s \n"
#define CTR_ERR_MISSING    "צומת הניתוח חסר"
#define CTR_ERR_FOPEN      "שגיאה בעת פתיחת הקובץ"
#define CTR_ERR_RNUM  "חייב לחזור [מספר].\n"
#define CTR_ERR_RSTR  "חייב לחזור [מחרוזת].\n"
#define CTR_ERR_RBOOL "חייב לחזור [בוליאני].\n"
#define CTR_ERR_NESTING    "יותר מדי שיחות מקוננות"
#define CTR_ERR_KNF        "מפתח לא נמצא:"
#define CTR_ERR_ASSIGN     "לא ניתן להקצות למשתנה לא מוגדר:"
#define CTR_ERR_EXEC       "לא ניתן לבצע את הפקודה"
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
#define CTR_TERR_PART      "חלק מהאסימון של הודעת מילות המפתח חורג ממגבלת המאגר"
#define CTR_TERR_COLONS   "Different no. of colons."
#define CTR_MSG_ERROR      "שגיאה"
#define CTR_MERR_OOM      "Out of memory. Failed to allocate %lu bytes.\n"
#define CTR_MERR_MALLOC   "Out of memory. Failed to allocate %lu bytes (malloc failed). \n"
#define CTR_MERR_POOL     "Unable to allocate memory pool.\n"
#define CTR_STDDATEFRMT   "%Y-%m-%d %H:%M:%S"