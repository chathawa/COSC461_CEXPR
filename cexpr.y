%{

#include <stdio.h>
#include <string.h>

int yylex();

int VERBOSE;


long VARS[26];

#define VALUE(c)   (VARS[(c) - 'a'])
%}

%union {
	char  var;
	long  num;
  char *str;
}


%token <var> VAR
%token <num> NUM

%token TERM
%token LPAREN, RPAREN
%token ADD, SUB, MULT, DIV, REM
%token NOT, AND, XOR, OR, LS, RS
%token ASN, INC, DEC, MULTASN, DIVASN, REMASN
%token ANDASN, XORASN, ORASN, LSASN, RSASN
%token DUMP
%token CLEAR

%type <num> expr

%%

line : expr TERM             
     | line expr TERM
     ;
expr : VAR                  { $$ = VALUE($1); }
     | NUM                  { $$ = $1; }
     | DUMP                 { dump(); }
     | CLEAR                { clear(); }
     | LPAREN expr RPAREN   { $$ = $2; }
     | expr ADD expr        { $$ = $1 + $3; }
     | expr SUB expr        { $$ = $1 - $3; }
     | SUB expr             { $$ = -$2; }
     | expr MULT expr       { $$ = $1 * $3; }
     | expr DIV expr        { if ($3) $$ = $1 / $3; else fprintf(stderr, "Divide by zero error\n"); }
     | expr REM expr        { $$ = $1 % $3; }
     | NOT expr             { $$ = ~$2; }
     | expr LS expr         { $$ = $1 << $3; }
     | expr RS expr         { $$ = $1 >> $3; }
     | expr AND expr        { $$ = $1 & $3; }
     | expr XOR expr        { $$ = $1 ^ $3; }
     | expr OR expr         { $$ = $1 | $3; }
     | VAR ASN expr         {printf("%li\n", $$ = VALUE($1) =  $3);}
     | VAR INC expr         {printf("%li\n", $$ = VALUE($1) += $3);}
     | VAR DEC expr         {printf("%li\n", $$ = VALUE($1) -= $3);}
     | VAR MULTASN expr     {printf("%li\n", $$ = VALUE($1) *= $3);}
     | VAR DIVASN expr      {if ($3) printf("%li\n", $$ = VALUE($1) /= $3); else printf("Divide by zero error\n");}
     | VAR REMASN expr      {printf("%li\n", $$ = VALUE($1) %=  $3);}
     | VAR LSASN expr       {printf("%li\n", $$ = VALUE($1) <<= $3);} 
     | VAR RSASN expr       {printf("%li\n", $$ = VALUE($1) >>= $3);}
     | VAR ANDASN expr      {printf("%li\n", $$ = VALUE($1) &=  $3);}
     | VAR XORASN expr      {printf("%li\n", $$ = VALUE($1) ^=  $3);}
     | VAR ORASN expr       {printf("%li\n", $$ = VALUE($1) |=  $3);}
     ;

%%


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

