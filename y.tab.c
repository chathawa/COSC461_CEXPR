/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170709

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "cexpr.y"

#include <stdio.h>
#include <string.h>

int yylex();
int VARS[26];
int ERROR = 0;

#define VALUE(c)   (VARS[(c) - 'a'])
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 13 "cexpr.y"
typedef union {
	char  var;
	int   num;
  char *str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 44 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   11,   11,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,    9,    9,    9,
    9,    9,    9,    9,    9,    9,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    7,    7,    7,    7,    7,
    7,    7,    7,    6,    6,    6,    6,    6,    6,    6,
    6,    5,    5,    5,    5,    5,    4,    4,    4,    4,
    3,    3,    3,    1,
};
static const YYINT yylen[] = {                            2,
    2,    3,    3,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    3,    3,    1,    1,    1,    1,    1,    1,    3,
    3,    1,    1,    1,    1,    1,    3,    3,    3,    1,
    1,    1,    1,    2,    1,    1,    1,    2,    1,    1,
    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   94,   93,
   92,    0,   86,   85,   83,   82,   84,   90,   89,   87,
   88,    0,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   14,   15,   16,   17,   18,
   19,   20,   21,   22,   23,   24,   91,    3,    4,    2,
   81,   80,   76,   75,   74,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yydgoto[] = {                          6,
    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,
   17,
};
static const YYINT yysindex[] = {                       493,
 -189,    0,  344,  501, -228, -244,    0, -256,    0,    0,
    0,  282, -257, -246, -260, -231, -156,  493,  493,  493,
  493,  493,  493,  493,  493,  493,  493,  493,    0,    0,
    0, -219,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -138, -137, -131,    0,  509,  509,  509,  517,  517,
  525,  525,  533,  541,  549,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  282,  282,  282,    0,    0,
    0,    0,    0,  282, -257, -257,    0,    0,    0,    0,
    0,  282, -257, -246, -246,    0,    0,    0,    0,    0,
  282, -257, -246, -260,    0,    0,    0,    0,    0,  282,
 -257, -246, -260, -231,    0,    0,    0,    0,    0,  282,
 -257, -246, -260, -231, -156,
};
static const YYINT yyrindex[] = {                         0,
 -153, -139,    0,    0,    0,    0, -125,    0, -111,  -97,
  -83, -235,  384,  455, -252, -255, -124,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  281,  295,  309,  -69,  -55,
  -41,  -27,  -13,  323,  398,  403,    1,   15,   29,   43,
   57,  337,  417,  458,  461,   71,   85,   99,  113,  127,
  351,  422,  473,  286,  141,  155,  169,  183,  197,  365,
  436,  476,  300, -250,  211,  225,  239,  253,  267,  379,
  441,  479,  314,  317, -123,
};
static const YYINT yygindex[] = {                         0,
   -3,   77,    7,   17,   27,  771,  778,  783,  507,   53,
   87,
};
#define YYTABLESIZE 838
static const YYINT yytable[] = {                         31,
   34,   39,   45,    6,   49,   50,    7,   53,   45,   32,
   35,   40,    1,    2,   27,    3,   38,   28,    4,   45,
   36,   41,    5,   10,   51,   52,   66,   66,   29,   38,
   37,    3,   50,   41,   31,   58,   58,   54,    5,   42,
   43,   67,   72,   72,   72,   80,   80,   88,   88,   97,
  106,  116,   73,   73,   73,   81,   81,   89,   89,   98,
  107,  117,   74,   74,   74,   82,   82,   90,   90,   99,
  108,  118,   75,   75,   75,   83,   83,   91,   91,  100,
  109,  119,   44,   18,   19,   20,   21,   22,   23,   24,
   25,   26,   27,   28,   56,   57,   58,   59,   60,   61,
   62,   63,   64,   65,   66,   94,  114,  124,   94,   94,
   94,   94,   94,   55,   94,   94,   94,   94,   94,   26,
   68,   69,   73,   73,   81,   81,   81,   70,   56,   47,
   37,   65,   65,   25,    5,   35,   72,   72,   80,   80,
   80,  125,   55,   46,   36,   64,   64,   13,    0,    0,
   69,   69,   76,   76,   76,    0,   53,   44,   34,   61,
   61,   12,    0,    0,   68,   68,   75,   75,   75,    0,
   52,   43,   33,   60,   60,   11,    0,    0,   67,   67,
   74,   74,   74,    0,   51,   42,   32,   59,   59,   73,
    0,    0,   73,   73,   81,   81,   81,    0,   73,   73,
   73,   73,   73,   72,    0,    0,   72,   72,   80,   80,
   80,    0,   72,   72,   72,   72,   72,   69,    0,    0,
   69,   69,   76,   76,   76,    0,   69,   69,   69,   69,
   69,   68,    0,    0,   68,   68,   75,   75,   75,    0,
   68,   68,   68,   68,   68,   67,    0,    0,   67,   67,
   74,   74,   74,    0,   67,   67,   67,   67,   67,   65,
    0,    0,   73,   73,   81,   81,   81,    0,   65,   65,
   65,   65,   65,   64,    0,    0,   72,   72,   80,   80,
   80,    0,   64,   64,   64,   64,   64,   61,    0,    0,
   69,   69,   76,   76,   76,    0,   61,   61,   61,   61,
   61,   60,    0,    0,   68,   68,   75,   75,   75,    0,
   60,   60,   60,   60,   60,   59,    0,    0,   67,   67,
   74,   74,   74,    0,   59,   59,   59,   59,   59,   56,
    0,    0,   73,   73,   81,   81,   81,    0,   56,   56,
   56,   65,   65,   55,    0,    0,   72,   72,   80,   80,
   80,    0,   55,   55,   55,   64,   64,   53,    0,    0,
   69,   69,   76,   76,   76,    0,   53,   53,   53,   61,
   61,   52,    0,    0,   68,   68,   75,   75,   75,    0,
   52,   52,   52,   60,   60,   51,    0,    0,   67,   67,
   74,   74,   74,    0,   51,   51,   51,   59,   59,   47,
    0,    0,   73,   73,   81,   81,   81,    0,   56,   47,
   47,   65,   65,   46,    0,    0,   72,   72,   80,   80,
   80,    0,   55,   46,   46,   64,   64,   44,    0,    0,
   69,   69,   76,   76,   76,    0,   53,   44,   44,   61,
   61,   43,    0,    0,   68,   68,   75,   75,   75,    0,
   52,   43,   43,   60,   60,   42,    0,    0,   67,   67,
   74,   74,   74,    0,   51,   42,   42,   59,   59,   37,
    0,    0,   73,   73,   81,   81,   81,    0,   56,   47,
   37,   65,   65,   36,    0,    0,   72,   72,   80,   80,
   80,    0,   55,   46,   36,   64,   64,   34,    0,    0,
   69,   69,   76,   76,   76,    0,   53,   44,   34,   61,
   61,   33,    0,    0,   68,   68,   75,   75,   75,    0,
   52,   43,   33,   60,   60,   32,    0,    0,   67,   67,
   74,   74,   74,    0,   51,   42,   32,   59,   59,   77,
    0,    0,   77,   77,   54,   46,   47,   48,   77,   77,
   77,   77,   77,   78,   54,   54,   78,   78,   38,  104,
  113,  123,   78,   78,   78,   78,   78,   79,   38,   38,
   79,   79,   28,    0,    0,   27,   79,   79,   79,   79,
   79,   66,   38,   28,   66,   66,   27,    0,    0,    0,
   66,   66,   66,   66,   66,   58,    0,    0,   66,   66,
   29,   30,    0,    3,   58,   58,   58,   58,   58,   50,
    0,    0,   66,   66,    0,    0,    0,    0,   50,   50,
   50,   58,   58,   41,    0,    0,   66,   66,    0,    0,
    0,    0,   50,   41,   41,   58,   58,   31,    0,    0,
   66,   66,    9,    0,    0,    0,   50,   41,   31,   58,
   58,   49,   40,   30,   57,   57,   70,    0,    0,    0,
    0,   71,    0,    0,    0,   70,   70,   70,   70,   70,
   71,   71,   71,   71,   71,   57,    0,    0,    0,    0,
   49,    0,    0,    0,   57,   57,   57,   57,   57,   49,
   49,   49,   57,   57,   40,    0,    0,    0,    0,   30,
    0,    0,    0,   49,   40,   40,   57,   57,   49,   40,
   30,   57,   57,    8,    0,    0,   62,    0,    0,   63,
    0,    0,   48,   39,   29,   62,   62,   62,   63,   63,
   63,   48,    0,    0,   39,    0,    0,   29,    0,    0,
   48,   48,   48,   48,   39,   39,   48,   39,   29,    1,
    2,    0,    3,    0,    0,    4,    0,   29,   33,    5,
    3,    0,    0,    4,    0,   29,   71,    5,    3,    0,
    0,    4,    0,   29,   79,    5,    3,    0,    0,    4,
    0,   29,   87,    5,    3,    0,    0,    4,    0,   29,
   96,    5,    3,    0,    0,    4,    0,   29,  105,    5,
    3,    0,    0,    4,    0,   29,  115,    5,    3,    0,
    0,    4,    0,    0,    0,    5,   76,   77,   78,   84,
   84,   92,   92,  101,  110,  120,   85,   86,   93,   93,
  102,  111,  121,   94,   95,  103,  112,  122,
};
static const YYINT yycheck[] = {                          3,
    4,    5,  259,  259,  262,  263,  259,  268,  259,    3,
    4,    5,  257,  258,  270,  260,  269,  270,  263,  270,
    4,    5,  267,  259,  271,  272,  262,  263,  257,  258,
    4,  260,  268,  269,  270,  271,  272,  269,  267,  284,
  285,  261,   46,   47,   48,   49,   50,   51,   52,   53,
   54,   55,   46,   47,   48,   49,   50,   51,   52,   53,
   54,   55,   46,   47,   48,   49,   50,   51,   52,   53,
   54,   55,   46,   47,   48,   49,   50,   51,   52,   53,
   54,   55,    6,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,   18,   19,   20,   21,   22,   23,
   24,   25,   26,   27,   28,  259,   54,   55,  262,  263,
  264,  265,  266,  270,  268,  269,  270,  271,  272,  259,
  259,  259,  262,  263,  264,  265,  266,  259,  268,  269,
  270,  271,  272,  259,  259,  259,  262,  263,  264,  265,
  266,   55,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,   -1,   -1,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,  259,  264,  265,  266,  268,  269,
  270,  271,  272,  259,  269,  270,  262,  263,  259,   53,
   54,   55,  268,  269,  270,  271,  272,  259,  269,  270,
  262,  263,  259,   -1,   -1,  259,  268,  269,  270,  271,
  272,  259,  269,  270,  262,  263,  270,   -1,   -1,   -1,
  268,  269,  270,  271,  272,  259,   -1,   -1,  262,  263,
  257,  258,   -1,  260,  268,  269,  270,  271,  272,  259,
   -1,   -1,  262,  263,   -1,   -1,   -1,   -1,  268,  269,
  270,  271,  272,  259,   -1,   -1,  262,  263,   -1,   -1,
   -1,   -1,  268,  269,  270,  271,  272,  259,   -1,   -1,
  262,  263,  259,   -1,   -1,   -1,  268,  269,  270,  271,
  272,  268,  269,  270,  271,  272,  259,   -1,   -1,   -1,
   -1,  259,   -1,   -1,   -1,  268,  269,  270,  271,  272,
  268,  269,  270,  271,  272,  259,   -1,   -1,   -1,   -1,
  259,   -1,   -1,   -1,  268,  269,  270,  271,  272,  268,
  269,  270,  271,  272,  259,   -1,   -1,   -1,   -1,  259,
   -1,   -1,   -1,  268,  269,  270,  271,  272,  268,  269,
  270,  271,  272,  259,   -1,   -1,  259,   -1,   -1,  259,
   -1,   -1,  268,  269,  270,  268,  269,  270,  268,  269,
  270,  259,   -1,   -1,  259,   -1,   -1,  259,   -1,   -1,
  268,  269,  270,  268,  269,  270,  268,  269,  270,  257,
  258,   -1,  260,   -1,   -1,  263,   -1,  257,  258,  267,
  260,   -1,   -1,  263,   -1,  257,  258,  267,  260,   -1,
   -1,  263,   -1,  257,  258,  267,  260,   -1,   -1,  263,
   -1,  257,  258,  267,  260,   -1,   -1,  263,   -1,  257,
  258,  267,  260,   -1,   -1,  263,   -1,  257,  258,  267,
  260,   -1,   -1,  263,   -1,  257,  258,  267,  260,   -1,
   -1,  263,   -1,   -1,   -1,  267,   46,   47,   48,   49,
   50,   51,   52,   53,   54,   55,   49,   50,   51,   52,
   53,   54,   55,   51,   52,   53,   54,   55,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#define YYUNDFTOKEN 299
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"VAR","NUM","TERM","LPAREN",
"RPAREN","ADD","SUB","MULT","DIV","REM","NOT","AND","XOR","OR","LS","RS","ASN",
"INC","DEC","MULTASN","DIVASN","REMASN","ANDASN","XORASN","ORASN","LSASN",
"RSASN","DUMP","CLEAR",0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : line",
"line : expr TERM",
"line : line expr TERM",
"line : line DUMP TERM",
"line : line CLEAR TERM",
"expr : or_expr",
"expr : xor_expr",
"expr : and_expr",
"expr : lrs_expr",
"expr : as_expr",
"expr : mdr_expr",
"expr : neg_expr",
"expr : not_expr",
"expr : par_expr",
"expr : VAR ASN expr",
"expr : VAR INC expr",
"expr : VAR DEC expr",
"expr : VAR MULTASN expr",
"expr : VAR DIVASN expr",
"expr : VAR REMASN expr",
"expr : VAR ANDASN expr",
"expr : VAR XORASN expr",
"expr : VAR ORASN expr",
"expr : VAR LSASN expr",
"expr : VAR RSASN expr",
"expr : var",
"expr : NUM",
"or_expr : xor_expr",
"or_expr : and_expr",
"or_expr : lrs_expr",
"or_expr : as_expr",
"or_expr : mdr_expr",
"or_expr : neg_expr",
"or_expr : not_expr",
"or_expr : par_expr",
"or_expr : or_expr OR or_expr",
"or_expr : var",
"or_expr : NUM",
"xor_expr : and_expr",
"xor_expr : lrs_expr",
"xor_expr : as_expr",
"xor_expr : mdr_expr",
"xor_expr : neg_expr",
"xor_expr : not_expr",
"xor_expr : par_expr",
"xor_expr : xor_expr XOR xor_expr",
"xor_expr : var",
"xor_expr : NUM",
"and_expr : lrs_expr",
"and_expr : as_expr",
"and_expr : mdr_expr",
"and_expr : neg_expr",
"and_expr : not_expr",
"and_expr : par_expr",
"and_expr : and_expr AND and_expr",
"and_expr : var",
"and_expr : NUM",
"lrs_expr : as_expr",
"lrs_expr : mdr_expr",
"lrs_expr : neg_expr",
"lrs_expr : not_expr",
"lrs_expr : par_expr",
"lrs_expr : lrs_expr LS lrs_expr",
"lrs_expr : lrs_expr RS lrs_expr",
"lrs_expr : var",
"lrs_expr : NUM",
"as_expr : mdr_expr",
"as_expr : neg_expr",
"as_expr : not_expr",
"as_expr : par_expr",
"as_expr : as_expr ADD as_expr",
"as_expr : as_expr SUB as_expr",
"as_expr : var",
"as_expr : NUM",
"mdr_expr : neg_expr",
"mdr_expr : not_expr",
"mdr_expr : par_expr",
"mdr_expr : mdr_expr MULT mdr_expr",
"mdr_expr : mdr_expr DIV mdr_expr",
"mdr_expr : mdr_expr REM mdr_expr",
"mdr_expr : var",
"mdr_expr : NUM",
"neg_expr : not_expr",
"neg_expr : par_expr",
"neg_expr : SUB neg_expr",
"neg_expr : var",
"neg_expr : NUM",
"not_expr : par_expr",
"not_expr : NOT not_expr",
"not_expr : var",
"not_expr : NUM",
"par_expr : LPAREN par_expr RPAREN",
"par_expr : var",
"par_expr : NUM",
"var : VAR",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 145 "cexpr.y"

int mult(int a, int b) {
  long result = (long) a * (long) b;
  if (result >> sizeof(int) * 8) {
    printf("overflow\n");
    ERROR = 1;
  }
  return (int) result;
}

int idiv(int a, int b) {
  if (b)
    return a / b;

  printf("dividebyzero\n");
  ERROR = 1;
  return 0;
}

void dump() {
  int i;

  for (i = 0; i < 26; i++)
    printf("%c: %li\n", 'a' + (char) i, VARS[i]);
}

void clear() {
  int i;

  for (i = 0; i < 26; i++)
    VALUE('a' + (char) i) = 0;
}

int main(int argc, char **argv) {
  if (yyparse()) {
    fprintf(stderr, "Invalid syntax\n");
    return 1;
  }
  
  printf("Calculator off.\n");
  return 0;
}

int yyerror(const char *s) {
  fprintf(stderr, "%s\n", s);
}

#line 560 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 38 "cexpr.y"
	{if (!ERROR) printf("%d\n", yystack.l_mark[-1].num); else ERROR = 0;}
break;
case 2:
#line 39 "cexpr.y"
	{if (!ERROR) printf("%d\n", yystack.l_mark[-1].num); else ERROR = 0;}
break;
case 3:
#line 40 "cexpr.y"
	{dump(); }
break;
case 4:
#line 41 "cexpr.y"
	{clear();}
break;
case 14:
#line 52 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) =   yystack.l_mark[0].num;               }
break;
case 15:
#line 53 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) +=  yystack.l_mark[0].num;               }
break;
case 16:
#line 54 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) -=  yystack.l_mark[0].num;               }
break;
case 17:
#line 55 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) = mult(VALUE(yystack.l_mark[-2].var), yystack.l_mark[0].num);}
break;
case 18:
#line 56 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) = idiv(VALUE(yystack.l_mark[-2].var), yystack.l_mark[0].num);}
break;
case 19:
#line 57 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) %=  yystack.l_mark[0].num;               }
break;
case 20:
#line 58 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) &=  yystack.l_mark[0].num;               }
break;
case 21:
#line 59 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) ^=  yystack.l_mark[0].num;               }
break;
case 22:
#line 60 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) |=  yystack.l_mark[0].num;               }
break;
case 23:
#line 61 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) <<= yystack.l_mark[0].num;               }
break;
case 24:
#line 62 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[-2].var) >>= yystack.l_mark[0].num;               }
break;
case 35:
#line 74 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num | yystack.l_mark[0].num;  }
break;
case 45:
#line 85 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num ^ yystack.l_mark[0].num;  }
break;
case 54:
#line 95 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num & yystack.l_mark[0].num;  }
break;
case 62:
#line 104 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num << yystack.l_mark[0].num; }
break;
case 63:
#line 105 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num >> yystack.l_mark[0].num; }
break;
case 70:
#line 113 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num + yystack.l_mark[0].num; }
break;
case 71:
#line 114 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num - yystack.l_mark[0].num; }
break;
case 77:
#line 121 "cexpr.y"
	{yyval.num = mult(yystack.l_mark[-2].num, yystack.l_mark[0].num);}
break;
case 78:
#line 122 "cexpr.y"
	{yyval.num = idiv(yystack.l_mark[-2].num, yystack.l_mark[0].num);}
break;
case 79:
#line 123 "cexpr.y"
	{yyval.num = yystack.l_mark[-2].num % yystack.l_mark[0].num;    }
break;
case 84:
#line 129 "cexpr.y"
	{yyval.num = -yystack.l_mark[0].num;}
break;
case 88:
#line 134 "cexpr.y"
	{yyval.num = ~yystack.l_mark[0].num;}
break;
case 91:
#line 138 "cexpr.y"
	{yyval.num = yystack.l_mark[-1].num;}
break;
case 94:
#line 142 "cexpr.y"
	{yyval.num = VALUE(yystack.l_mark[0].var);}
break;
#line 875 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
