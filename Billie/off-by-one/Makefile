CC=g++
CFLAGS=I.

.PHONY: run clean reset

off-by-one: off-by-one.o
	$(CC) -o off-by-one off-by-one.o

run: off-by-one
	@./off-by-one

clean:
	rm -f *.o off-by-one *.out

reset: clean
	cp -f template.cpp off-by-one.cpp