all: quick_count

quick_count: transitions.o state.o main.o
	gcc bin/state.o bin/transitions.o bin/main.o -o quick_count

main.o: src/main.c
	gcc -c  src/main.c -o bin/main.o

state.o: src/state.h
	gcc -c src/state.h -o bin/state.o

transitions.o: src/transitions.h
	gcc -c src/transitions.h -o bin/transitions.o
