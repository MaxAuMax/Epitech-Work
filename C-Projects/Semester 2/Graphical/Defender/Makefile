##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC		=	lib/my_putchar.c 		\
			lib/my_putstr.c 		\
			lib/my_put_nbr.c 		\
			lib/my_strlen.c 		\
			lib/my_str_to_int.c 	\
			lib/my_int_to_str.c 	\
			lib/my_revstr.c 		\
			lib/my_strcmp.c			\

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

BINARY	=	my_defender

FILE 	=	src/main.c 				\
			src/my_defender.c 		\
			src/usage.c 			\
			src/destroy.c 			\
			src/game/move.c 		\
			src/game/tiles.c		\
			src/game/create.c 		\
			src/game/rect.c 		\
			src/game/enemy.c 		\
			src/game/game.c 		\
			src/game/events.c 		\
			src/game/path.c 		\
			src/game/cursor.c 		\
			src/game/turret.c 		\
			src/game/gold.c 		\
			src/menu/create.c 		\
			src/menu/menu.c 		\
			src/menu/menu_rect.c 	\
			src/menu/menu_rect2.c	\
			src/menu/menu_rect3.c	\
			src/menu/menu_rect4.c 	\
			src/menu/draw.c 		\
			src/menu/texture.c 		\
			src/menu/event.c		\
			src/menu/event2.c		\
			src/menu/click.c		\
			src/menu/click2.c		\

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
