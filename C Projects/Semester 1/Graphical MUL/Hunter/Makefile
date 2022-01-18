##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_strstr.c	\
		lib/my/my_isneg.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strncmp.c	\
		lib/my/my_swap.c	\
		lib/my/my_strupcase.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlowcase.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcapitalize.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_str_isalpha.c	\
		lib/my/my_sort_int_array.c	\
		lib/my/my_str_isnum.c	\
		lib/my/my_compute_power_rec.c	\
		lib/my/my_str_islower.c	\
		lib/my/my_compute_square_root.c	\
		lib/my/my_str_isupper.c	\
		lib/my/my_is_prime.c	\
		lib/my/my_str_isprintable.c	\
		lib/my/my_find_prime_sup.c	\
		lib/my/my_showstr.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_showmem.c	\
		lib/my/my_strncpy.c	\
		lib/my/my_strcat.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strncat.c	\
		lib/my/my_show_word_array.c	\
		lib/my/my_strdup.c	\
		lib/my/my_int_to_str.c	\
		lib/my/my_str_to_int.c	\
		lib/my/my_int_to_oct.c 	\
		lib/my/my_int_to_hex.c 	\
		lib/my/my_int_to_bin.c 	\
		lib/my/my_printf.c	\
		lib/my/disps.c	\
		lib/my/disp_stdarg.c	\

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

BINARY	=	my_hunter

FILE 	=	my_hunter.c 	\
			main.c 	\
			events.c 	\
			usage.c 	\
			move_rect.c 	\
			move_sprite.c 	\
			texture.c 	\
			draw.c 	\
			create.c 	\
			randco.c 	\
			check_hit.c 	\
			check_bul.c 	\
			reset_clock.c 	\
			create/c_dog.c 	\
			create/c_duck1.c 	\
			create/c_bg.c 	\
			create/c_cross.c 	\
			create/c_shot.c 	\
			create/c_shotr.c 	\
			create/c_hit.c 	\
			create/c_round.c 	\
			create/set_sprite.c 	\
			create/c_score.c 	\
			create/c_hitr.c 	\

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(FILE) $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	rm -rf $(BINARY)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
