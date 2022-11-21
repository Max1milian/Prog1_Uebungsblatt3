CC = clang
CFLAGS = -std=c11 -I include/ -m64 -Wall -Wextra -Werror -pedantic -g -o

all: src/main.c 
	$(CC) $(CFLAGS) main src/main.c 
