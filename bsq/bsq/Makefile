NAME = bsq
SRCS = /Users/ocupymars/Downloads/bsq/bsq/srcs/main.c /Users/ocupymars/Downloads/bsq/bsq/srcs/grid_parsing.c /Users/ocupymars/Downloads/bsq/bsq/srcs/map_parsing.c ./Users/ocupymars/Downloads/bsq/bsq/srcs/map_solving.c /Users/ocupymars/Downloads/bsq/bsq/srcs/utilities.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

.c.o:
			cc $(FLAGS) -c $< -o $(<:.c=.o) -I .

$(NAME):	$(OBJS)
			gcc $(FLAGS) $(OBJS) -o $(NAME)

all: 		$(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
