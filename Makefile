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
		algo/simple_sort/simple_sort.c \
		algo/simple_sort/sort_two.c \
		algo/simple_sort/sort_three.c \
		algo/simple_sort/sort_four.c \
		algo/simple_sort/sort_five.c \
		algo/complex_sort/complex_sort.c \
		algo/complex_sort/get_pivot.c \
		algo/complex_sort/quick_sort_left.c \
		algo/complex_sort/quick_sort_right.c \




OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) *.o

$(OBJS) : $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS) -I .

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
re : fclean all