CFLAGS = -Wall -Wextra -Werror
CC = gcc
BINARY = libftprintf.a
CFILES = ft_printf.c print_args.c print_hex.c
OBJECTS = $(CFILES:.c=.o)

all: $(BINARY)

$(BINARY): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(BINARY)

re: fclean all

.PHONY: all clean fclean re
