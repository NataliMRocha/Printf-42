NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC =	./ft_printf.c \
		./ft_putchar.c \
		./ft_putstr.c \
		./ft_putnbr.c \
		./ft_putnbr_hx.c \
		./ft_putptr.c \
		./ft_checkformat.c

OBJECTS = $(SRC:%.c=%.o)

INCLUDES = ft_printf.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)

%.o:%.c $(INCLUDES)
	${CC} ${FLAGS} -c $< -o $@
	ar rc $(NAME) $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re


