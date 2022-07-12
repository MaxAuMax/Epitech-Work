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
			lib/my_str_to_int.c 	\
			lib/my_int_to_str.c 	\
			lib/my_revstr.c 	\
			lib/my_str_to_word_array.c 	\
			lib/my_str_to_word_array_sep.c 	\
			lib/disps.c 	\
			lib/disp_stdarg.c 	\
			lib/my_int_to_oct.c 	\
			lib/my_int_to_hex.c 	\
			lib/my_int_to_bin.c 	\
			lib/my_printf.c 	\
			lib/print_arg.c 	\
			lib/my_strcmp.c 	\
			lib/my_strncmp.c 	\
			lib/my_strcat.c 	\
			lib/my_strncat.c 	\
			lib/my_strncpy.c 	\

FILE 	=	src/main.c 	\
			src/basic_ls.c 	\
			src/dir_and_flags.c	\
			src/ls_l.c 	\

OBJ		= 	$(SRC:.c=.o)

NAME	= 	libmy.a

BINARY	=	my_ls

CFLAGS	=	-I./include

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
