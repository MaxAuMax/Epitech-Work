##
## EPITECH PROJECT, 2021
## makecat
## File description:
## ..
##

SRC	=	cat.c	\

NAME	= 	cat.a

OBJ	= 	$(SRC:.c=.o)

$(NAME):        $(OBJ)
	        ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
