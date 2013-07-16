OBJS = main.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LIBS = -I/usr/local/include -L/usr/local/lib -lwiringPi

all: $(OBJS)
	$(CC) $(LIBS) $(LFLAGS) $(OBJS) -o a.out

main.o: main.c
	$(CC) $(CFLAGS) main.c

clean:
	\rm *.o *~ a.out
