##
## EPITECH PROJECT, 2021
## make
## File description:
## ..
##

SRC	=	btree_create_node.c \

NAME	= 	libbtree.a

OBJ	= 	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
