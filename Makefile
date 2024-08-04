
CC = gcc
CFLAGS = -Wall -Wextra -g
TARGETS = mzip elf2mzip

.PHONY: all clean

all: $(TARGETS)

mzip: mzip.o
    $(CC) $(CFLAGS) -o mzip mzip.o

elf2mzip: elf2mzip.o
    $(CC) $(CFLAGS) -o elf2mzip elf2mzip.o

mzip.o: mzip.c mzip.h types.h
    $(CC) $(CFLAGS) -c mzip.c

elf2mzip.o: elf2mzip.c elf.h types.h mzip.h
    $(CC) $(CFLAGS) -c elf2mzip.c

clean:
    rm -f $(TARGETS) *.o
