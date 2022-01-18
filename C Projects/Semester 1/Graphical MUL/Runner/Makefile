##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC		=	lib/my_putchar.c 	\
			lib/my_putstr.c 	\
			lib/my_put_nbr.c 	\
			lib/my_strlen.c 	\
			lib/my_str_to_int.c 	\
			lib/my_int_to_str.c 	\
			lib/my_revstr.c 	\

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

BINARY	=	my_runner

FILE 	=	src/main.c 	\
			src/destroy.c 	\
			src/my_runner.c 	\
			src/check_collision.c 	\
			src/handle_status.c 	\
			src/handle_victory.c 	\
			src/usage.c 	\
			src/events.c 	\
			src/para.c 	\
			src/music.c \
			src/move.c 	\
			src/clock.c 	\
			src/jump.c 	\
			src/update_score.c 	\
			src/load_map.c 	\
			src/sprite/set.c 	\
			src/sprite/game.c 	\
			src/sprite/menu.c 	\
			src/sprite/settings.c 	\
			src/sprite/end.c 	\
			src/click_action.c 	\
			src/sprite/c_moon.c 	\
			src/sprite/c_spike.c 	\
			src/sprite/c_demon.c 	\
			src/sprite/c_tiles.c 	\
			src/sprite/c_ghost.c 	\
			src/sprite/c_score.c 	\
			src/sprite/c_end.c 	\
			src/sprite/c_menu_bg.c 	\
			src/sprite/c_menu_but.c 	\
			src/sprite/c_menu_set.c 	\

CFLAGS	=	-lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio -I./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(FILE) $(NAME) $(CFLAGS) -g3

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(BINARY)

re:	fclean all
