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

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

BINARY	=	antman

FILE 	=	src/main.c 	\
			src/algorithm.c 	\

CFLAGS	=	-I./include/ -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(FILE) $(NAME) $(CFLAGS)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(BINARY)

re:	fclean all
