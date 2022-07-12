##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	= 	lib/my_atoi.c 				\
			lib/my_str_to_word_array.c 	\
			lib/my_strcmp.c 			\
			lib/my_strlen.c 			\
			lib/my_strdup.c 			\
			lib/my_strcat.c 			\
			lib/my_printf.c 			\

FILE 	=	main.c 						\
			src/parth.c 				\
			src/start_end.c				\
			src/cases.c 				\

OBJ		= 	$(SRC:.c=.o)

NAME	= 	libmy.a

BINARY	=	lem_in

CFLAGS	=	-I./include

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o $(BINARY) $(OBJ) $(FILE) $(CFLAGS)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME) $(BINARY) vgcore*

re:	fclean all