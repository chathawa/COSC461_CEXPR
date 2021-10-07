%{
	#include <stdlib.h>
	#include "y.tab.h"

%}

  /* manifest constants */
  LPAREN, RPAREN,
  ADD, SUB, MULT, DIV, REM,
  LS, RS, NOT, AND, XOR, OR,
  ASN, INC, DEC, MULTASN, DIVASN,
  REMASN, LSASN, RSASN, ANDASN, XORASN, ORASN


/* regular definitions */
delim    [ \t\n]
ws       {delim}+
variable [a-z]
digit    [0-9]
number   {digit}+

%%

{ws}	   {/* no action needed */}

{variable} {
	yylval.var = yytext[0];
	return(VAR);
}
{number}   {
	yylval.num = strtol(yytext, NULL, 10);
	return(NUM);
}

"(" {return(LPAREN);}
")" {return(RPAREN);}

"+" {return(ADD);}
"-" {return(SUB);}
"*" {return(MULT);}
"/" {return(DIV);}
"%" {return(REM);}

"<<" {return(LS);}
">>" {return(RS);}
"~"  {return(NOT);}
"&"  {return(AND);}
"^"  {return(XOR);}
"|"  {return(OR);}

"="   {return(ASN);}
"+="  {return(INC);}
"-="  {return(DEC);}
"*="  {return(MULTASN);}
"/="  {return(DIVASN);}
"%="  {return(REMASN);}
"<<=" {return(LSASN);}
">>=" {return(RSASN);}
"&="  {return(ANDASN);}
"^="  {return(XORASN);}
"|="  {return(ORASN);}
