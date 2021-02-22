NAME = bsq
SRCS = ./main.c ./grid_parsing.c ./map_parsing.c ./map_solving.c ./utilities.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

.c.o:
			gcc $(FLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME):	$(OBJS)
			gcc $(FLAGS) $(OBJS) -o $(NAME)

all: 		$(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
