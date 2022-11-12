NAME = push_swap
CC = cc
MAIN = push_swap.c
CFLAGS = -Wall -Wextra -Werror -I .
SRCS =  libft/ft_atoi.c \
		libft/ft_putstr.c \
		libft/ft_strlen.c \
		libft/ft_isdigit.c \
		operators/push_a.c \
		operators/push_b.c \
		operators/swap.c \
		operators/rotate_a.c \
		operators/rotate_b.c \
		operators/r_rotate_a.c \
		operators/r_rotate_b.c \
		utils/add_node.c \
		utils/new_node.c \
		utils/new_stack.c \
		utils/pre_last_node.c \
		utils/stack_size.c \
		utils/free_memory.c \
		check/check_error.c \
		check/is_sorted.c \
		algorithm/simple_sort/simple_sort.c \
		algorithm/simple_sort/sort_two.c \
		algorithm/simple_sort/sort_three.c \
		algorithm/simple_sort/sort_four.c \
		algorithm/simple_sort/sort_five.c \
		algorithm/complex_sort/complex_sort.c \
		algorithm/complex_sort/get_index.c \
		algorithm/complex_sort/chunks_move_one.c \
		algorithm/complex_sort/chunks_move_two.c \
		algorithm/complex_sort/sorted_array.c \
		algorithm/complex_sort/make_form.c \


$(NAME) :
			cc $(MAIN) $(CFLAGS) $(SRCS) -o $(NAME)
				
all	: $(NAME)
	
clean :
		rm -fr $(NAME)

fclean : clean
		rm -fr $(NAME)

re : fclean all