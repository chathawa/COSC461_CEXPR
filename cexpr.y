%{

#include <stdio.h>
int yylex();

long VARS[26];

#define VALUE(c) (VARS[(c) - 'a'])

%}

%union {
	char var;
	long num;
}


%token <var> VAR
%token <num> NUM

%type <num> expr

%%

lines: 
     | lines line
     ;

line : expr ';' '\n'        { printf("%li\n", $1); }
     | expr ';'             { printf("%li\n", $1); } 
     ;
expr : VAR                  { $$ = VALUE($1); }
     | NUM                  { $$ = $1; }
     | '(' expr ')'         { $$ = $2; }
     | expr '+' expr        { $$ = $1 + $3; }
     | expr '-' expr        { $$ = $1 - $3; }
     | '-' expr             { $$ = -$2; }
     | expr '*' expr        { $$ = $1 * $3; }
     | expr '/' expr        { $$ = $1 / $3; }
     | expr '%' expr        { $$ = $1 % $3; }
     | '~' expr             { $$ = ~$2; }
     | expr '<' '<' expr    { $$ = $1 << $4; }
     | expr '>' '>' expr    { $$ = $1 >> $4; }
     | expr '&' expr        { $$ = $1 & $3; }
     | expr '^' expr        { $$ = $1 ^ $3; }
     | expr '|' expr        { $$ = $1 | $3; }
     | VAR '=' expr         { $$ = VALUE($1) = $3; }
     | VAR '+' '=' expr     { $$ = VALUE($1) += $4; }
     | VAR '-' '=' expr     { $$ = VALUE($1) -= $4; }
     | VAR '*' '=' expr     { $$ = VALUE($1) *= $4; }
     | VAR '/' '=' expr     { $$ = VALUE($1) /= $4; }
     | VAR '%' '=' expr     { $$ = VALUE($1) %= $4; }
     | VAR '<' '<' '=' expr { $$ = VALUE($1) <<= $5; }
     | VAR '>' '>' '=' expr { $$ = VALUE($1) >>= $5; }
     | VAR '&' '=' expr     { $$ = VALUE($1) &= $4; }
     | VAR '^' '=' expr     { $$ = VALUE($1) ^= $4; }
     | VAR '|' '=' expr     { $$ = VALUE($1) |= $4; }
     ;

