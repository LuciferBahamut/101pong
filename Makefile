##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

NAME	=	101pong

SRC	=	src/101pong.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	$(CC) $(DEFLAGS) -o $(NAME) $(OBJ)

clean:	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re
