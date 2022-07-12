##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for all my functions
##

SRC		=	lib/my_putstr.c 			\
			lib/my_strlen.c 			\
			lib/my_put_nbr.c 			\
			lib/my_putchar.c 			\
			lib/my_strcmp.c 			\
			lib/my_str_to_int.c			\
			lib/my_str_to_word_array.c	\
			lib/my_str_to_word_array_sep.c	\
			lib/print_arg.c				\
			lib/my_strdup.c 			\
			lib/my_strcat.c				\
			lib/my_revstr.c 			\
			lib/my_int_to_str.c 		\

GLOBAL 	=	src/main.c 			\
			src/flags.c 		\
			src/usage.c 		\
			src/init.c 			\
			src/read.c 			\
			src/flags_cases.c 	\

TETRIS =	src/tetris/game.c 	\
			src/tetris/window.c \
			src/tetris/move.c 	\
			src/tetris/seconds.c 	\

DEBUG 	=	src/debug/debug.c 	\
			src/debug/my_printf.c 	\
			src/debug/print_key.c 	\

OBJ		= 	$(SRC:.c=.o)

NAME	= 	libmy.a

BINARY	=	tetris

CFLAGS	=	-I./include -lncurses -g3

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(OBJ) $(GLOBAL) $(TETRIS) $(DEBUG) $(CFLAGS)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	rm -rf $(BINARY)

fclean: clean
	rm -rf $(NAME) vgcore*

re:	fclean all
