all: strings recitation program1 program2

strings: 9_bugs_arrays_strings.c
	clang 9_bugs_arrays_strings.c -o strings

recitation: recitation.c
	clang recitation.c -o recitation

example1.o: example1.c example.h
	clang -c example1.c

example2.o: example2.c example.h
	clang -c example2.c

program1: example1.o program1.c
	clang example1.o program1.c -o program1

program2: example2.o program2.c
	clang example2.o program2.c -o program2

clean:
	rm -rf *.o

clobber: clean
	rm -rf strings recitation program1 program2
