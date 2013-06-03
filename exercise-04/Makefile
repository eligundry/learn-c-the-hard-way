CFLAGS=-Wall -g
VALGRIND=valgrind -q

all:
	cc $(CFLAGS) ex4.c -o ex4.out

valgrind: all
	$(VALGRIND) ./ex4.out

clean:
	rm -f *.out
