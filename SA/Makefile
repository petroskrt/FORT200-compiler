all: fort200

syntax.tab.c syntax.tab.h: syntax.y
	bison -v -d syntax.y

lex.yy.c: compiler2.l syntax.tab.h
	flex compiler2.l

fort200: lex.yy.c syntax.tab.c syntax.tab.h 
	gcc syntax.tab.c lex.yy.c -lm

hashtbl.o: hashtbl.c hashtbl.h
	gcc -o hashtbl.o -c hashtbl.c
clean:
	rm a.exe syntax.tab.c lex.yy.c syntax.tab.h 
	rm syntax.output
