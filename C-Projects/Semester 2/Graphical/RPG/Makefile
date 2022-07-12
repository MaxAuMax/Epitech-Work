##
## EPITECH PROJECT, 2022
## B-MUL-200-NCE-2-1-myrpg-hugo.houbert
## File description:
## Makefile
##

LIB  	=   lib/my_int_to_str.c 	\
			lib/my_put_nbr.c 	\
			lib/my_putchar.c 	\
			lib/my_putstr.c 	\
			lib/my_revstr.c 	\
			lib/my_str_to_word_array.c 	\
			lib/my_str_to_int.c 	\
			lib/my_strcmp.c 	\
			lib/my_strlen.c 	\

OBJ 	=   $(LIB:.c=.o)

SRC		=	src/main.c\
			src/events.c\
			src/init.c\
			src/init_2.c\
			src/my_rpg.c\
			src/move.c\
			src/init_stat.c\
			src/custom.c\
			src/init_inv.c\
			src/free.c\
			src/free_func.c\
			src/getline.c\
			src/draw_wordchat.c\
			src/intro/intro.c\
			src/game/colors.c\
			src/game/enter.c\
			src/game/tp.c\
			src/game/tp_2.c\
			src/game/fade_out.c\
			src/game/game.c\
			src/game/inside.c\
			src/game/check_map.c\
			src/game/init_pnj.c\
			src/game/pnj_color.c\
			src/game/snow_effect.c\
			src/game/init_enemi.c\
			src/game/init_enemi2.c\
			src/game/win.c\
			src/game/lose.c\
			src/game/chest.c\
			src/game/shovel.c\
			src/game/dep.c\
			src/game/armor_drop.c\
			src/game/restart.c\

MENU	=	src/menu/menu.c\
			src/menu/button.c\
			src/menu/init_menu.c\
			src/menu/click.c\
			src/menu/click2.c\
			src/menu/create.c\
			src/menu/event.c\
			src/menu/event2.c\
			src/menu/rect.c\
			src/menu/rect2.c\
			src/menu/texture.c\
			src/menu/drawsetting.c\
			src/menu/init_menu2.c\
			src/menu/button2.c\
			src/menu/button3.c\
			src/menu/chatbox.c\
			src/menu/howtoplay.c\
			src/menu/bkgsettings.c\
			src/fight/draw_pnj.c\
			src/fight/displaychat.c\

FGT		=	src/fight/init.c\
			src/fight/init2.c\
			src/fight/init_stats.c\
			src/fight/fight.c\
			src/fight/fight_plaine.c\
			src/fight/fight_aut.c\
			src/fight/fight_winter.c\
			src/fight/fightbox.c\
			src/fight/events.c\
			src/fight/first_attack.c\
			src/fight/scnd_attack.c\
			src/fight/third_attack.c\
			src/fight/update_en.c\
			src/fight/update_en2.c\
			src/fight/update_stats.c\
			src/fight/pnj_chatbox.c\
			src/fight/pnj_chatbox2.c\
			src/fight/ennemy_attack.c\

INV 	=	src/inventory/inventory.c\
			src/inventory/draw_inv.c\
			src/inventory/stats.c\
			src/inventory/update_stats.c\
			src/inventory/pick_down.c\
			src/inventory/pick_up.c\
			src/inventory/filling_inv.c\

LIBNAME	= 	libmy.a

BINARY	=	my_rpg

CFLAGS	=	-I./include/

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

$(LIBNAME):		$(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	gcc -o $(BINARY) $(SRC) $(MENU) $(INV) $(FGT) $(LIBNAME) $(CFLAGS) $(CSFML)

all:	$(LIBNAME)

clean:
	rm -f $(OBJ)
	rm -f $(LIBNAME)

fclean:	clean
	rm -f $(LIBNAME) $(BINARY) *~ *# vgcore.*

re:	fclean all
