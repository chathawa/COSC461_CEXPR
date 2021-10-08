%{
/**
Created by Clark Hathaway for COSC 461 Compilers, Fall 2021
*/
#include <stdio.h>
#include <string.h>

int yylex();
int VARS[26];
int ERROR = 0;

#define VALUE(c)   (VARS[(c) - 'a'])
%}

%union {
	char  var;
	int   num;
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

%type <num> var
%type <num> expr, par_expr, not_expr, neg_expr
%type <num> mdr_expr, as_expr, lrs_expr, and_expr, xor_expr, or_expr

%%

line     : expr       TERM {if (!ERROR) printf("%d\n", $1); else ERROR = 0;}            
         | line expr  TERM {if (!ERROR) printf("%d\n", $2); else ERROR = 0;}
         | line DUMP  TERM {dump(); }
         | line CLEAR TERM {clear();}
         ;
expr     : or_expr
         | xor_expr
         | and_expr
         | lrs_expr
         | as_expr
         | mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | VAR ASN     expr {$$ = VALUE($1) =   $3;               }
         | VAR INC     expr {$$ = VALUE($1) +=  $3;               }
         | VAR DEC     expr {$$ = VALUE($1) -=  $3;               }
         | VAR MULTASN expr {$$ = VALUE($1) = mult(VALUE($1), $3);}
         | VAR DIVASN  expr {$$ = VALUE($1) = idiv(VALUE($1), $3);}
         | VAR REMASN  expr {$$ = VALUE($1) %=  $3;               }
         | VAR ANDASN  expr {$$ = VALUE($1) &=  $3;               }
         | VAR XORASN  expr {$$ = VALUE($1) ^=  $3;               }
         | VAR ORASN   expr {$$ = VALUE($1) |=  $3;               }
         | VAR LSASN   expr {$$ = VALUE($1) <<= $3;               }
         | VAR RSASN   expr {$$ = VALUE($1) >>= $3;               }
         | var
         | NUM
         ;
or_expr  : xor_expr
         | and_expr
         | lrs_expr
         | as_expr
         | mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | or_expr OR or_expr {$$ = $1 | $3;  }
         | var
         | NUM
         ;
xor_expr : and_expr
         | lrs_expr
         | as_expr
         | mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | xor_expr XOR xor_expr {$$ = $1 ^ $3;  }
         | var
         | NUM
         ;
and_expr : lrs_expr
         | as_expr
         | mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | and_expr AND and_expr {$$ = $1 & $3;  }
         | var
         | NUM
         ;
lrs_expr : as_expr
         | mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | lrs_expr LS lrs_expr {$$ = $1 << $3; }
         | lrs_expr RS lrs_expr {$$ = $1 >> $3; }
         | var
         | NUM
         ;
as_expr  : mdr_expr
         | neg_expr
         | not_expr
         | par_expr
         | as_expr ADD as_expr {$$ = $1 + $3; }
         | as_expr SUB as_expr {$$ = $1 - $3; }
         | var
         | NUM
         ;
mdr_expr : neg_expr
         | not_expr
         | par_expr
         | mdr_expr MULT mdr_expr {$$ = mult($1, $3);}
         | mdr_expr DIV  mdr_expr {$$ = idiv($1, $3);}
         | mdr_expr REM  mdr_expr {$$ = $1 % $3;    }
         | var
         | NUM
         ;
neg_expr : not_expr
         | par_expr
         | SUB neg_expr {$$ = -$2;}
         | var
         | NUM
         ;
not_expr : par_expr
         | NOT not_expr {$$ = ~$2;}
         | var
         | NUM
         ;
par_expr : LPAREN par_expr RPAREN {$$ = $2;}
         | var
         | NUM
         ;
var      : VAR {$$ = VALUE($1);}
         ;
%%

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

