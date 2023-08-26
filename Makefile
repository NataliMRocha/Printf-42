NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC =	./ft_printf.c \
		./ft_putchar.c \
		./ft_putnbr.c \
		./ft_putptr.c \

OBJECTS = $(SRC:%.c=%.o)

SRC_B =	./ft_printf_bonus.c \
		./ft_putchar_bonus.c \
		./ft_putnbr_bonus.c \
		./ft_putptr_bonus.c \

OBJECTS_B = $(SRC_B:%.c=%.o)

INCLUDES = ft_printf.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)

bonus: $(OBJECTS_B)

%.o:%.c $(INCLUDES)
	${CC} ${FLAGS} -c $< -o $@
	ar rc $(NAME) $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus


