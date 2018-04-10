NAME =	libftprintf.a
SRC_D = src/
SRC =	ft_printf.c
LIB_D = libft/
LIB = $(LIB_D)libft.a
OBJ =	$(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB_D)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $<

clean:
	make clean -C $(LIB_D)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIB_D)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re