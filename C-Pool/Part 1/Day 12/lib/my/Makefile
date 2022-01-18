##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC	=	my_putchar.c	\
		my_strstr.c	\
		my_isneg.c	\
		my_strcmp.c	\
		my_put_nbr.c	\
		my_strncmp.c	\
		my_swap.c	\
		my_strupcase.c	\
		my_putstr.c	\
		my_strlowcase.c	\
		my_strlen.c	\
		my_strcapitalize.c	\
		my_getnbr.c	\
		my_str_isalpha.c	\
		my_sort_int_array.c	\
		my_str_isnum.c	\
		my_compute_power_rec.c	\
		my_str_islower.c	\
		my_compute_square_root.c	\
		my_str_isupper.c	\
		my_is_prime.c	\
		my_str_isprintable.c	\
		my_find_prime_sup.c	\
		my_showstr.c	\
		my_strcpy.c	\
		my_showmem.c	\
		my_strncpy.c	\
		my_strcat.c	\
		my_revstr.c	\
		my_strncat.c	\
		my_show_word_array.c	\
		my_strdup.c	\

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ./../
	cp my.h ./../../include/
	make clean

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
