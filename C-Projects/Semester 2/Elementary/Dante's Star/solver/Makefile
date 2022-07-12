##
## EPITECH PROJECT, 2021
## B-CPE-200-NCE-2-1-dante-allan.charlier
## File description:
## Makefile
##

SRC		=	lib/my_putstr.c 	\
			lib/my_strlen.c 	\
			lib/my_put_nbr.c 	\
			lib/my_putchar.c 	\
			lib/my_str_to_int.c 	\
			lib/my_int_to_str.c 	\
			lib/my_revstr.c 	\
			lib/remove.c 	\
			lib/my_str_to_word_array_sep.c 	\
			lib/disps.c 	\
			lib/disp_stdarg.c 	\
			lib/my_int_to_oct.c 	\
			lib/my_int_to_hex.c 	\
			lib/my_int_to_bin.c 	\
			lib/my_printf.c 	\
			lib/print_arg.c 	\
			lib/empty.c \
			lib/my_strcmp.c 	\
			lib/add.c 	\
			lib/my_strncmp.c 	\
			lib/my_strcat.c 	\
			lib/my_strncat.c 	\
			lib/my_strncpy.c 	\
			src/main.c 	\
			src/path.c 	\
			src/sort.c 	\
			src/struct.c 	\
			src/print_path.c \
			src/swap_list.c 	\
			src/neighb.c 	\
			src/block.c 	\

OBJ		= 	$(SRC:.c=.o)

NAME	= 	libmy.a

BINARY	=	solver

CFLAGS	=	-I./include/

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(OBJ) $(CFLAGS)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	rm -rf $(BINARY)

fclean: clean
	rm -rf $(NAME) vgcore*

re:	fclean all