NAME = compile.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  libft/ft_atoi.c \
		libft/ft_putstr.c \
		libft/ft_strlen.c \
		libft/ft_isdigit.c \
		oper/push.c \
		oper/swap.c \
		oper/rotate.c \
		oper/r_rotate.c \
		utils/add_node.c \
		utils/new_node.c \
		utils/new_stack.c \
		utils/pre_last_node.c \
		utils/stack_size.c \
		utils/free_memory.c \
		check/check_error.c \
		check/is_sorted.c \


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) *.o

$(OBJS) : $(SRCS)
	cc $(FLAGS) -c $(SRCS) -I .

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
re : fclean all