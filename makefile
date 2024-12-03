CFLAGS = -Wall -Wextra -Werror -I .
CC = gcc
BINARY = libft.a
CFILES = $(wildcard *.c)
OBJECTS = $(CFILES:.c=.o)

all: $(BINARY)
	

$(BINARY): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(CFLAGS) += -fPIC

so: $(OBJECTS) test
	gcc -nostartfiles -shared -o libft.so $(OBJECTS) 
	
clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(BINARY) $(OBJECTS)
re: fclean all
	
.PHONY: clean fclean re bonus test