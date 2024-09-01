CC=g++
CFLAGS=I.

.PHONY: run clean reset

off-by-one: challenge.o
	$(CC) -o challenge challenge.o

run: challenge
	@./challenge

clean:
	rm -f *.o challenge *.out

reset: clean
	cp -f original.cpp challenge.cpp