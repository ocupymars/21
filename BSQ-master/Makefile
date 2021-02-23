NAME	=	bsq

CC	=	gcc

SRC	=	src/main.c	\
		src/tools.c	\
		src/my_getnbr.c	\
		src/map.c	\
		src/find_square.c

INC	=	./include

CFLAGS	+=	-I$(INC) -Wall -Wextra -W

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f


all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
