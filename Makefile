
trpolab: test.o main.o bibl.o
	gcc -o trpolab  test.o main.o bibl.o -lm

-test: test.o main2.o bibl.o 
	gcc -lm -o test test.o main2.o bibl.o ./test

main.o: main.c bibl.h 
	gcc -c main.c

test.o: test.c bibl.h 
	gcc -c test.c

bibl.o: bibl.c bibl.h
	gcc -c bibl.c

main2.o: main2.c
	gcc -c main2.c
