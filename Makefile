NAME = libftprintf.a

SRCS = ft_printf.c ft_numbers.c ft_words.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		RM $(OBJS)
fclean:
		RM $(NAME) $(OBJS)
re:
		fclean all

.PHONY: all clean fclean re

//don't forget to sync with the libft + the bonus