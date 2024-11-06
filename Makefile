SRCS =		ft_converting.c									\
		ft_print_adress.c								\
		ft_printf.c									\
		ft_putnbr_base.c	\
		ft_utils.c	

NAME = libftprintf.a
PRINTF = ar rcs
OBJS = $(SRCS:.c=.o)
REMOVE = rm -rf

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CC_FLAGS) -c -I ./ $< -o $(<:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
				$(PRINTF) $(NAME) $(OBJS)
				@echo "Printf Compiled"

clean:
		$(REMOVE) $(OBJS)
		@echo ".o Delete"

fclean: clean
				$(REMOVE) $(NAME)
				@echo "libftprintf.a Delete"

re: fclean clean all

.PHONY:		all clean fclean re