all: ds0

CC = gcc
INCLUDE = .

CFLAGS = -g -Wall -ansi
#CFLAGS = -O -Wall -ansi

ds0: ds0_overview.o
	$(CC) -o ds0 ds0_overview.o

ds0_overview.0: ds0_overview.c ds_common.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c ds0_overview.c

clean:
	-rm *.o *.exe