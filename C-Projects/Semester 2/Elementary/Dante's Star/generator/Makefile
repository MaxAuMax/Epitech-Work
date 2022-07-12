##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for all my functions
##

SRC		=	lib/my_putstr.c 	\
			lib/my_strlen.c 	\
			lib/my_put_nbr.c 	\
			lib/my_putchar.c 	\
			lib/my_strcmp.c 	\
			lib/print_arg.c 	\

FILE 	=	src/main.c 			\
			src/sidewinder.c 	\
			src/binary.c 		\
			src/backtracking.c 	\
			##src/pile.c 			\

OBJ		= 	$(SRC:.c=.o)

NAME	= 	libmy.a

BINARY	=	generator

CFLAGS	=	-I./include -g3

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(OBJ) $(FILE) $(CFLAGS)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	rm -rf $(BINARY)

fclean: clean
	rm -rf $(NAME) vgcore*

re:	fclean all
