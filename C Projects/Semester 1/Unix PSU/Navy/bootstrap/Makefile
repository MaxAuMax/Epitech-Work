##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for bootstrap
##

NAME1	=	process_info

SRC1 	=	Exercise1/main.c

OBJ1	= 	$(SRC1:.c=.o)

NAME2	=	kill_it

SRC2 	=	Exercise2/main.c

OBJ2	= 	$(SRC2:.c=.o)

NAME3	=	who_sig_me

SRC3 	=	Exercise3/main.c

OBJ3	= 	$(SRC3:.c=.o)

NAME4	=	signal_me

SRC4 	=	Exercise4/main.c

OBJ4	= 	$(SRC4:.c=.o)

LIBNAME	=	libmy.a

LIBSRC	=	../lib/my_printf.c			\
		../lib/my_printf_flag_b.c		\
		../lib/my_printf_flag_c.c		\
		../lib/my_printf_flag_d.c		\
		../lib/my_printf_flag_i.c		\
		../lib/my_printf_flag_o.c		\
		../lib/my_printf_flag_percent.c	\
		../lib/my_printf_flag_s_up.c	\
		../lib/my_printf_flag_s.c		\
		../lib/my_printf_flag_u.c		\
		../lib/my_printf_flag_x_low.c	\
		../lib/my_printf_flag_x.c		\
		../lib/my_putstr_upcase_s.c	\
		../lib/my_unsigned_put_nbr.c	\
		../lib/my_compute_factorial_rec.c	\
		../lib/my_compute_power_rec.c	\
		../lib/my_convert_base.c		\
		../lib/my_is_prime.c		\
		../lib/my_find_prime_sup.c		\
		../lib/my_getnbr.c			\
		../lib/my_put_nbr.c		\
		../lib/my_putchar.c		\
		../lib/my_putstr.c			\
		../lib/my_revstr.c			\
		../lib/my_sort_int_array.c		\
		../lib/my_show_int_array.c		\
		../lib/my_str_isalpha.c		\
		../lib/my_str_islower.c		\
		../lib/my_str_isnum.c		\
		../lib/my_str_isprintable.c	\
		../lib/my_str_isupper.c		\
		../lib/my_strcat.c			\
		../lib/my_strcmp.c			\
		../lib/my_strcpy.c			\
		../lib/my_strncat.c		\
		../lib/my_strncmp.c		\
		../lib/my_strncpy.c		\
		../lib/my_strlen.c			\
		../lib/my_strlowcase.c		\
		../lib/my_strupcase.c		\
		../lib/my_str_to_int.c		\
		../lib/my_int_to_str.c		\
		../lib/my_char_to_int.c		\
		../lib/my_int_to_char.c		\

LIBOBJ	=	$(LIBSRC:.c=.o)

RM	=	rm -rf

CC	=	gcc

LIB 	= 	-L./ -lmy

$(NAME1)	:	$(OBJ1) $(LIBOBJ)
		ar rc $(LIBNAME) $(LIBOBJ)
		$(CC) -o $(NAME1) $(OBJ1) $(LIB)

$(NAME2)	:	$(OBJ2) $(LIBOBJ)
		ar rc $(LIBNAME) $(LIBOBJ)
		$(CC) -o $(NAME2) $(OBJ2) $(LIB)

$(NAME3)	:	$(OBJ3) $(LIBOBJ)
		ar rc $(LIBNAME) $(LIBOBJ)
		$(CC) -o $(NAME3) $(OBJ3) $(LIB)

$(NAME4)	:	$(OBJ4) $(LIBOBJ)
		ar rc $(LIBNAME) $(LIBOBJ)
		$(CC) -o $(NAME4) $(OBJ4) $(LIB)

all	:	$(NAME1) $(NAME2) $(NAME3) $(NAME4)

clean	:
		$(RM) $(LIBNAME) $(LIBOBJ) *~ *#
		$(RM) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)

fclean	:	clean
		$(RM) $(NAME1) $(NAME2) $(NAME3) $(NAME4)
		rm -rf stdout.log

re	:	fclean all
