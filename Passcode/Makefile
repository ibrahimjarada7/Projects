.PHONY all clean

all: passcode

clean:
	rm -f *.o passcode

digit.o: digit.c
	gcc -c digit.c -o digit.o

gen_num.o: gen_num.c gen_num.h
	gcc -c gen_num.c -o gen_num.o

passcode: digit.o gen_num.o
	gcc digit.o gen_num.o -o passcode