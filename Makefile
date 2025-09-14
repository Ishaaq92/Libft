CFLAGS = -Wall -Wextra -Werror -I .
CC = gcc
NAME = libft.a
FT_PRINTF = ft_printf/libftprintf.a
SRCS = ft_atoi.c     ft_isalpha.c  ft_itoa.c    ft_memmove.c     ft_putnbr_fd.c  ft_strdup.c    ft_strlcpy.c  ft_strnstr.c  ft_tolower.c \
		ft_bzero.c    ft_isascii.c  ft_memchr.c  ft_memset.c      ft_putstr_fd.c  ft_striteri.c  ft_strlen.c   ft_strrchr.c  ft_toupper.c \
		ft_calloc.c   ft_isdigit.c  ft_memcmp.c  ft_putchar_fd.c  ft_split.c      ft_strjoin.c   ft_strmapi.c  ft_strtrim.c \
		ft_isalnum.c  ft_isprint.c  ft_memcpy.c  ft_putendl_fd.c  ft_strchr.c     ft_strlcat.c   ft_strncmp.c  ft_substr.c get_next_line_bonus.c get_next_line_utils_bonus.c 


ODIR = objs/
# OBJECTS = $(CFILES:.c=$(ODIR).o)
OBJS = $(patsubst %.c, $(ODIR)%.o, $(SRCS))

all: $(NAME) $(FT_PRINTF)
	
$(FT_PRINTF):
	@make --no-print-directory -C ft_printf/

$(NAME): $(OBJS)  | $(ODIR)
	ar rcs $@ $(OBJS)

$(ODIR)%.o: %.c | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)

clean:
	@rm -rf $(ODIR)
	@make --no-print-directory -C ft_printf/ clean

fclean: clean
	@rm -rf $(NAME)
	@make --no-print-directory -C ft_printf/ fclean

re: fclean all
	
.PHONY: all clean fclean re bonus 
