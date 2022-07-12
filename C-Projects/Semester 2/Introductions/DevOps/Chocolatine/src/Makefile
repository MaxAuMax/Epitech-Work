##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC		=	lib/my_putstr.c 	\
			lib/my_strlen.c 	\
			lib/my_put_nbr.c 	\
			lib/my_putchar.c 	\
			lib/my_str_to_int.c 	\
			src/push_swap.c 	\
			src/pile.c 	\
			src/display.c 	\
			src/check.c 	\
			src/swap/s.c 	\
			src/swap/p.c	\
			src/swap/r.c 	\
			src/swap/rr.c 	\

NAME	= 	libmy.a

OBJ		= 	$(SRC:.c=.o)

BINARY	=	push_swap

CFLAGS	=	-I./include -O2 -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(BINARY) $(OBJ) $(CFLAGS)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(BINARY)

re:	fclean all

tests_run:
	echo "Tests run"
