.PHONY: all clean
all: play

clean:
	rm -f play.o display.o play

FLAGS = -Wall -Werror

display.o: display.c display.h
	gcc $(FLAGS) -c display.c -o display.o

play.o: play.c display.h
	gcc $(FLAGS) -c play.c -o play.o

play: play.o display.o display.h
	gcc play.o display.o -o play