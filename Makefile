CC=gcc
CFLAGS=-Iinclude

all: main

main: main.o arreglo.o
	$(CC) -o main main.o arreglo.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

arreglo.o: src/arreglo.c
	$(CC) $(CFLAGS) -c src/arreglo.c -o arreglo.o

clean:
	rm -f *.o main

