#define VAR 257
#define NUM 258
#define TERM 259
#define LPAREN 260
#define RPAREN 261
#define ADD 262
#define SUB 263
#define MULT 264
#define DIV 265
#define REM 266
#define NOT 267
#define AND 268
#define XOR 269
#define OR 270
#define LS 271
#define RS 272
#define ASN 273
#define INC 274
#define DEC 275
#define MULTASN 276
#define DIVASN 277
#define REMASN 278
#define ANDASN 279
#define XORASN 280
#define ORASN 281
#define LSASN 282
#define RSASN 283
#define DUMP 284
#define CLEAR 285
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char  var;
	long  num;
  char *str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
