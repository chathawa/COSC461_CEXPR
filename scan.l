%{
	#include <stdlib.h>
	#include "y.tab.h"

%}


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

