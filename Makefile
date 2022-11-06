NAME = compile.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I .
SRCS = libft/ft_atoi.c \
		libft/ft_putstr.c \
		libft/ft_strcmp.c \
		libft/ft_strlen.c \
		oper/push.c \
		oper/swap.c \
		oper/rotate.c \
		oper/r_rotate.c \
		utils/add_node.c \
		utils/is_sorted.c \
		utils/new_node.c \
		utils/new_stack.c \
		utils/pre_last_node.c \
		utils/stack_size.c \
		chech_error.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rc $(NAME) $(OBJS)
	rm -rf *.o

clean :
	rm -rf *.o
fclean :
	rm -rf $(NAME) $(OBJS)
re : fclean all