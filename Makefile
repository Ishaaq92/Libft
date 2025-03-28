CFLAGS = -Wall -Wextra -Werror -I .
CC = gcc
BINARY = libft.a
FT_PRINTF = ft_printf/libftprintf.a
CFILES = ft_atoi.c     ft_isalpha.c  ft_itoa.c    ft_memmove.c     ft_putnbr_fd.c  ft_strdup.c    ft_strlcpy.c  ft_strnstr.c  ft_tolower.c \
		ft_bzero.c    ft_isascii.c  ft_memchr.c  ft_memset.c      ft_putstr_fd.c  ft_striteri.c  ft_strlen.c   ft_strrchr.c  ft_toupper.c \
		ft_calloc.c   ft_isdigit.c  ft_memcmp.c  ft_putchar_fd.c  ft_split.c      ft_strjoin.c   ft_strmapi.c  ft_strtrim.c \
		ft_isalnum.c  ft_isprint.c  ft_memcpy.c  ft_putendl_fd.c  ft_strchr.c     ft_strlcat.c   ft_strncmp.c  ft_substr.c get_next_line_bonus.c get_next_line_utils_bonus.c

OBJECTS = $(CFILES:.c=.o)

all: $(BINARY) 
	
$(FT_PRINTF):
	@make --no-print-directory -C ft_printf/

$(BINARY): $(OBJECTS) $(FT_PRINTF) 
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJECTS)
	@make --no-print-directory -C ft_printf/ clean

fclean:
	@rm -rf $(BINARY) $(OBJECTS)
	@make --no-print-directory -C ft_printf/ fclean

re: fclean all
	
.PHONY: clean fclean re bonus test
