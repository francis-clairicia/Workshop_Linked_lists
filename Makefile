##
## EPITECH PROJECT, 2021
## Workshop_Linked_lists
## File description:
## Makefile
##

SRC		=	main.c	\
			my_list.c

OBJ		=	$(SRC:.c=.o)

NAME	=	linked_list

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re