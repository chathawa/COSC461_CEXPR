%{
	#include <stdlib.h>
	#include "y.tab.h"

  int VERBOSE;
  #define PRINT_TEXT if (VERBOSE) printf(yytext);
  #define TOKEN(x) PRINT_TEXT return(x);
%}


/* regular definitions */
delim    [ \n]
ws       {delim}+
variable [a-z]
digit    [0-9]
number   {digit}+

%%

{ws}	      {PRINT_TEXT}
";"         {TOKEN(TERM)}

"("         {TOKEN(LPAREN)}
")"         {TOKEN(RPAREN)}

"+"         {TOKEN(ADD)}
"-"         {TOKEN(SUB)}
"*"         {TOKEN(MULT)}
"/"         {TOKEN(DIV)}
"%"         {TOKEN(REM)}

"~"         {TOKEN(NOT)}
"<<"        {TOKEN(LS)}
">>"        {TOKEN(RS)}
"&"         {TOKEN(AND)}
"^"         {TOKEN(XOR)}
"|"         {TOKEN(OR)}

"="         {TOKEN(ASN)}
"+="        {TOKEN(INC)}
"-="        {TOKEN(DEC)}
"*="        {TOKEN(MULTASN)}
"/="        {TOKEN(DIVASN)}
"%="        {TOKEN(REMASN)}

"<<="       {TOKEN(LSASN)}
">>="       {TOKEN(RSASN)}
"&="        {TOKEN(ANDASN)}
"^="        {TOKEN(XORASN)}
"|="        {TOKEN(ORASN)}

"dump"      {TOKEN(DUMP)}
"clear"     {TOKEN(CLEAR)}

{variable} {
  PRINT_TEXT
	yylval.var = yytext[0];
	return(VAR);
}

{number}   {
  PRINT_TEXT
	yylval.num = strtol(yytext, NULL, 10);
	return(NUM);
}

