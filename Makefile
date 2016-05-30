complete: clean trpolab test

trpolab: test.o main.o bibl.o
	gcc -o trpolab  test.o main.o bibl.o -lm -I ./thirdparty

test: test.o main2.o bibl.o 
	gcc -o test test.o main2.o bibl.o -lm -I ./thirdparty
	./test

main.o: ./src/main.c ./thirdparty/bibl.h 
	gcc -c ./src/main.c -I ./thirdparty

test.o: ./thirdparty/test.c ./thirdparty/bibl.h 
	gcc -c ./thirdparty/test.c -I ./thirdparty

bibl.o: ./thirdparty/bibl.c ./thirdparty/bibl.h
	gcc -c ./thirdparty/bibl.c -I ./thirdparty

main2.o: ./tests/main2.c
	gcc -c ./tests/main2.c -I ./thirdparty
clean:
	rm *.o
