%{
	#include <stdlib.h>
	#include "y.tab.h"
%}


/* regular definitions */
delim    [ \n]
ws       {delim}+
variable [a-z]
digit    [0-9]
number   {digit}+

%%

{ws}	      {}
";"         {return(TERM);}

"("         {return(LPAREN);}
")"         {return(RPAREN);}

"+"         {return(ADD);}
"-"         {return(SUB);}
"*"         {return(MULT);}
"/"         {return(DIV);}
"%"         {return(REM);}

"~"         {return(NOT);}
"<<"        {return(LS);}
">>"        {return(RS);}
"&"         {return(AND);}
"^"         {return(XOR);}
"|"         {return(OR);}

"="         {return(ASN);}
"+="        {return(INC);}
"-="        {return(DEC);}
"*="        {return(MULTASN);}
"/="        {return(DIVASN);}
"%="        {return(REMASN);}

"<<="       {return(LSASN);}
">>="       {return(RSASN);}
"&="        {return(ANDASN);}
"^="        {return(XORASN);}
"|="        {return(ORASN);}

"dump"      {return(DUMP);}
"clear"     {return(CLEAR);}

{variable} {yylval.var = yytext[0]; return(VAR);}

{number}   {yylval.num = strtol(yytext, NULL, 10); return(NUM);}

