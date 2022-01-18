##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for all my functions
##

NAME	=	navy

SRC 	=	sources/main.c	\
			sources/help.c	\
			sources/connection.c 	\
			sources/read_and_load.c 	\
			sources/play.c 	\
			sources/attack.c 	\
			sources/receive_attack.c 	\
			sources/receive_hit.c 	\
			sources/change_maps.c 	\
			sources/check_win.c 	\

OBJ	= 	$(SRC:.c=.o)

LIBNAME	=	libmy.a

LIBSRC	=	lib/my_printf.c			\
		lib/my_printf_flag_b.c		\
		lib/my_printf_flag_c.c		\
		lib/my_printf_flag_d.c		\
		lib/my_printf_flag_i.c		\
		lib/my_printf_flag_o.c		\
		lib/my_printf_flag_percent.c	\
		lib/my_printf_flag_s_up.c	\
		lib/my_printf_flag_s.c		\
		lib/my_printf_flag_u.c		\
		lib/my_printf_flag_x_low.c	\
		lib/my_printf_flag_x.c		\
		lib/my_putstr_upcase_s.c	\
		lib/my_unsigned_put_nbr.c	\
		lib/my_compute_factorial_rec.c	\
		lib/my_compute_power_rec.c	\
		lib/my_convert_base.c		\
		lib/my_is_prime.c		\
		lib/my_find_prime_sup.c		\
		lib/my_getnbr.c			\
		lib/my_put_nbr.c		\
		lib/my_putchar.c		\
		lib/my_putstr.c			\
		lib/my_revstr.c			\
		lib/my_sort_int_array.c		\
		lib/my_show_int_array.c		\
		lib/my_str_isalpha.c		\
		lib/my_str_islower.c		\
		lib/my_str_isnum.c		\
		lib/my_str_isprintable.c	\
		lib/my_str_isupper.c		\
		lib/my_strcat.c			\
		lib/my_strcmp.c			\
		lib/my_strcpy.c			\
		lib/my_strncat.c		\
		lib/my_strncmp.c		\
		lib/my_strncpy.c		\
		lib/my_strlen.c			\
		lib/my_strlowcase.c		\
		lib/my_strupcase.c		\
		lib/my_str_to_int.c		\
		lib/my_int_to_str.c		\
		lib/my_char_to_int.c		\
		lib/my_int_to_char.c		\

LIBOBJ	=	$(LIBSRC:.c=.o)

RM	=	rm -rf

LIB 	= 	-L./ -lmy

$(NAME)	:	$(OBJ) $(LIBOBJ)
		ar rc $(LIBNAME) $(LIBOBJ)
		gcc -o $(NAME) $(OBJ) $(LIB) sources/tester.c -lcriterion

all	:	$(NAME)

clean	:
		$(RM) $(OBJ) $(LIBNAME) $(LIBOBJ) *~ *#

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
