cexpr: y.tab.c lex.yy.c
	gcc -g -o cexpr y.tab.c lex.yy.c -ll

y.tab.c: cexpr.y
	yacc -d cexpr.y

lex.yy.c: scan.l
	lex scan.l

test-stdout.txt: cexpr
	./cexpr < input.txt > test-stdout.txt

ref-stdout.txt: ref_cexpr
	./ref_cexpr < input.txt > ref-stdout.txt

test: test-stdout.txt ref-stdout.txt
	diff -y test-stdout.txt ref-stdout.txt

clean:
	rm -f y.tab.c y.tab.h lex.yy.c cexpr test-stdout.txt ref-stdout.txt
