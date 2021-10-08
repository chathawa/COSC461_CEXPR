# CEXPR - C Expression Parser for COSC 461 Compilers
This lex/yacc program compiles into C code and can be assembled into a working parser for C-style arithmetic operations. The grammar described herein provides operator
precdence and left-associativity corresponding to ANSI-C operators. 26 alphabetic variables are pre-defined and can be assigned values and have operations performed over them.
These operations can be used to form arbitarily complex expressions with considerable performance and adherence to order of operations.

## Methods
This program borrows heavily from Compilers: Principles, Techniques, & Tools (Aho, et. al). The primary technique used in the BNF grammar described in this program is concerned with guaranteeing operator
precedence and associativity, specifically section 4.8.1. Essentially, to enforce precedence, a nonterminal is created for each precedence value -- even if this includes multiple operators --. The grammar
rules for a given nonterminal like these is that it translates to any nonterminal corresponding to a higher precedence and no nonterminals corresponding to lower precedence. This guarantees the parse tree
to *descend* down into higher precedence operator symbols in the string expansion so that those operators are evaluated first. The value of the innermost expression is stored as an `int` and used in the
expression above in the tree as it ascends back up this parse tree.

## Testing
Several painstaking steps were taken during the testing and deugging of this program. At first `gdb` seemed like a reasonable tool for debugging this C program but the generated code was unfamiliar to me entirely
and completely fruitless in the debugging shell context. I then added a global and an argument to the main() so that a debug flag could be set internally and the scanning would output its progress so if a syntax
error was encountered, it was obvious what line or symbol caused it. This was useful when the scanner was consuming whitespace or delimiters but not returning them as tokens. Finally, a new target was added to
the makefile when a working version was in order so that a simple `diff` could be performed between the reference executable's output and this program's output. There is still a difference toward the bottom
that has yet to be identified.
