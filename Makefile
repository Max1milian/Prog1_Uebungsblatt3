CC = clang
CFLAGS = -std=c11 -O0 -I include/ -m64 -Wall -Wextra -Werror -pedantic-errors -g -o

all: src/main.c 
	$(CC) $(CFLAGS) main src/main.c 
