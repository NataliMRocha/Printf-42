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
		./ft_flags_bonus.c \


OBJECTS_B = $(SRC_B:%.c=%.o)

INCLUDES = ft_printf.h

INCLUDES_B = ft_printf_bonus.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)

bonus: $(OBJECTS_B)

%.o:%.c $(INCLUDES) $(INCLUDES_B) 
	${CC} ${FLAGS} -c $< -o $@
	ar rc $(NAME) $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus


