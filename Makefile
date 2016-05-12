FLAGS=-Wextra -Wall -Werror -pedantic -std=c99

all: start

start: main.o bintree.o
	gcc $(FLAGS) -o lab23 main.o bintree.o

main.o: main.c
	gcc -c $(FLAGS) main.c

bintree.o: bintree.h bintree.c
	gcc -c $(FLAGS) bintree.h bintree.c

clean:
	-rm -f *.o *.gch lab23

lib: bintree.o
	ar rc lib/libbintree.a bintree.o
	ranlib lib/libbintree.a