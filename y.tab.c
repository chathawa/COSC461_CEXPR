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

int VERBOSE;


long VARS[26];

#define VALUE(c)   (VARS[(c) - 'a'])
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 16 "cexpr.y"
typedef union {
	char  var;
	long  num;
  char *str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 47 "y.tab.c"

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
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    2,    3,    1,    1,    1,    1,    3,    3,    3,    2,
    3,    3,    3,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    4,    0,    0,    0,    5,    6,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    7,    2,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yydgoto[] = {                          8,
    9,
};
static const YYINT yysindex[] = {                      -224,
 -173,    0, -224, -224, -224,    0,    0, -224, -200, -224,
 -224, -224, -224, -224, -224, -224, -224, -224, -224, -224,
 -174, -151, -151, -186,    0, -224, -224, -224, -224, -224,
 -224, -224, -224, -224, -224, -151, -151, -151, -151, -151,
 -151, -151, -151, -151, -151, -151,    0,    0, -151, -151,
 -151, -151, -151, -151, -151, -151, -151, -151,
};
static const YYINT yyrindex[] = {                         0,
 -217,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -255, -241,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -240, -221, -203, -137, -136,
 -133, -132, -129, -128, -125, -124,    0,    0, -121, -120,
 -117, -116, -113, -112, -109, -108, -105, -104,
};
static const YYINT yygindex[] = {                         0,
   -3,
};
#define YYTABLESIZE 157
static const YYINT yytable[] = {                         21,
   22,   23,    0,   10,   24,   10,   36,   37,   38,   39,
   40,   41,   42,   43,   44,   45,   46,   14,   20,   14,
   20,    0,   49,   50,   51,   52,   53,   54,   55,   56,
   57,   58,    1,    2,    0,    3,    0,   21,    4,   21,
    0,    3,    5,    3,    3,    3,    3,    3,    3,    0,
    3,    3,    3,    3,    3,   22,    0,   22,   25,    6,
    7,   26,   27,   28,   29,   30,    0,   31,   32,   33,
   34,   35,   48,    0,    0,   26,   27,   28,   29,   30,
    0,   31,   32,   33,   34,   35,   47,   26,   27,   28,
   29,   30,    0,   31,   32,   33,   34,   35,    0,   10,
   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
   26,   27,   28,   29,   30,    0,   31,   32,   33,   34,
   35,   23,   24,   23,   24,   25,   28,   25,   28,   29,
   30,   29,   30,   26,   27,   26,   27,    8,    9,    8,
    9,   11,   12,   11,   12,   13,   17,   13,   17,   18,
   19,   18,   19,   15,   16,   15,   16,
};
static const YYINT yycheck[] = {                          3,
    4,    5,   -1,  259,    8,  261,   10,   11,   12,   13,
   14,   15,   16,   17,   18,   19,   20,  259,  259,  261,
  261,   -1,   26,   27,   28,   29,   30,   31,   32,   33,
   34,   35,  257,  258,   -1,  260,   -1,  259,  263,  261,
   -1,  259,  267,  261,  262,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  259,   -1,  261,  259,  284,
  285,  262,  263,  264,  265,  266,   -1,  268,  269,  270,
  271,  272,  259,   -1,   -1,  262,  263,  264,  265,  266,
   -1,  268,  269,  270,  271,  272,  261,  262,  263,  264,
  265,  266,   -1,  268,  269,  270,  271,  272,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  262,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  259,  259,  261,  261,  259,  259,  261,  261,  259,
  259,  261,  261,  259,  259,  261,  261,  259,  259,  261,
  261,  259,  259,  261,  261,  259,  259,  261,  261,  259,
  259,  261,  261,  259,  259,  261,  261,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#define YYUNDFTOKEN 289
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
"RSASN","DUMP","CLEAR",0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : line",
"line : expr TERM",
"line : line expr TERM",
"expr : VAR",
"expr : NUM",
"expr : DUMP",
"expr : CLEAR",
"expr : LPAREN expr RPAREN",
"expr : expr ADD expr",
"expr : expr SUB expr",
"expr : SUB expr",
"expr : expr MULT expr",
"expr : expr DIV expr",
"expr : expr REM expr",
"expr : NOT expr",
"expr : expr LS expr",
"expr : expr RS expr",
"expr : expr AND expr",
"expr : expr XOR expr",
"expr : expr OR expr",
"expr : VAR ASN expr",
"expr : VAR INC expr",
"expr : VAR DEC expr",
"expr : VAR MULTASN expr",
"expr : VAR DIVASN expr",
"expr : VAR REMASN expr",
"expr : VAR LSASN expr",
"expr : VAR RSASN expr",
"expr : VAR ANDASN expr",
"expr : VAR XORASN expr",
"expr : VAR ORASN expr",

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
#line 73 "cexpr.y"


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
  if (argc == 2) {
    if (strcmp(argv[1], "-v")) {
      fprintf(stderr, "Unknown option '%s'\n", argv[1]);
      return 1;
    }
    VERBOSE = 1;
  }
  else if (argc == 1)
    VERBOSE = 0;
  else {
    fprintf(stderr, "%d arguments given in excess\n", 4 - argc);
    return 1;
  }

  if (yyparse()) {
    fprintf(stderr, "Invalid syntax\n");
    return 1;
  }
  
  printf("Exiting\n");
  return 0;
}

int yyerror(const char *s) {
  fprintf(stderr, "%s\n", s);
}

#line 323 "y.tab.c"

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
case 3:
#line 42 "cexpr.y"
	{ yyval.num = VALUE(yystack.l_mark[0].var); }
break;
case 4:
#line 43 "cexpr.y"
	{ yyval.num = yystack.l_mark[0].num; }
break;
case 5:
#line 44 "cexpr.y"
	{ dump(); }
break;
case 6:
#line 45 "cexpr.y"
	{ clear(); }
break;
case 7:
#line 46 "cexpr.y"
	{ yyval.num = yystack.l_mark[-1].num; }
break;
case 8:
#line 47 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num + yystack.l_mark[0].num; }
break;
case 9:
#line 48 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num - yystack.l_mark[0].num; }
break;
case 10:
#line 49 "cexpr.y"
	{ yyval.num = -yystack.l_mark[0].num; }
break;
case 11:
#line 50 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num * yystack.l_mark[0].num; }
break;
case 12:
#line 51 "cexpr.y"
	{ if (yystack.l_mark[0].num) yyval.num = yystack.l_mark[-2].num / yystack.l_mark[0].num; else fprintf(stderr, "Divide by zero error\n"); }
break;
case 13:
#line 52 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num % yystack.l_mark[0].num; }
break;
case 14:
#line 53 "cexpr.y"
	{ yyval.num = ~yystack.l_mark[0].num; }
break;
case 15:
#line 54 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num << yystack.l_mark[0].num; }
break;
case 16:
#line 55 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num >> yystack.l_mark[0].num; }
break;
case 17:
#line 56 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num & yystack.l_mark[0].num; }
break;
case 18:
#line 57 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num ^ yystack.l_mark[0].num; }
break;
case 19:
#line 58 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num | yystack.l_mark[0].num; }
break;
case 20:
#line 59 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) =  yystack.l_mark[0].num);}
break;
case 21:
#line 60 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) += yystack.l_mark[0].num);}
break;
case 22:
#line 61 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) -= yystack.l_mark[0].num);}
break;
case 23:
#line 62 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) *= yystack.l_mark[0].num);}
break;
case 24:
#line 63 "cexpr.y"
	{if (yystack.l_mark[0].num) printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) /= yystack.l_mark[0].num); else printf("Divide by zero error\n");}
break;
case 25:
#line 64 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) %=  yystack.l_mark[0].num);}
break;
case 26:
#line 65 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) <<= yystack.l_mark[0].num);}
break;
case 27:
#line 66 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) >>= yystack.l_mark[0].num);}
break;
case 28:
#line 67 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) &=  yystack.l_mark[0].num);}
break;
case 29:
#line 68 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) ^=  yystack.l_mark[0].num);}
break;
case 30:
#line 69 "cexpr.y"
	{printf("%li\n", yyval.num = VALUE(yystack.l_mark[-2].var) |=  yystack.l_mark[0].num);}
break;
#line 634 "y.tab.c"
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
