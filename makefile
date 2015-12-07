all: quick_count

quick_count: main.o
	gcc bin/main.o -o quick_count

main.o: src/main.c
	gcc -c  src/main.c -o bin/main.o
