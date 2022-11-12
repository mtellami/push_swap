NAME = push_swap
CHECKER = mychecker
CC = cc
RM = rm -fr
MAIN = push_swap.c
BONUS = bonus/checker.c
CFLAGS = -Wall -Wextra -Werror -I .

LIBFT = libft/ft_atoi.c \
		libft/ft_putstr.c \
		libft/ft_strlen.c \
		libft/ft_isdigit.c \
		libft/ft_strcmp.c \
		libft/ft_strstr.c \

CHECK = check/check_error.c \
		check/is_sorted.c \

UTILS = utils/add_node.c \
		utils/new_node.c \
		utils/new_stack.c \
		utils/pre_last_node.c \
		utils/stack_size.c \
		utils/free_memory.c \

SRCS =  operators/push_a.c \
		operators/push_b.c \
		operators/swap.c \
		operators/rotate_a.c \
		operators/rotate_b.c \
		operators/r_rotate_a.c \
		operators/r_rotate_b.c \
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

BSCS = bonus/gnl/get_next_line.c \
	   bonus/gnl/get_next_line_utils.c \
	   bonus/oper_bonus/push_a_bonus.c \
	   bonus/oper_bonus/push_b_bonus.c \
	   bonus/oper_bonus/swap_a_bonus.c \
	   bonus/oper_bonus/swap_b_bonus.c \
	   bonus/oper_bonus/rotate_a_bonus.c \
	   bonus/oper_bonus/rotate_b_bonus.c \
	   bonus/oper_bonus/r_rotate_a_bonus.c \
	   bonus/oper_bonus/r_rotate_b_bonus.c \


$(NAME) :
			$(CC) $(MAIN) $(CFLAGS) $(SRCS) $(LIBFT) $(CHECK) $(UTILS) -o $(NAME)

all	: $(NAME)

bonus : all 
		$(CC) $(CFLAGS) $(BONUS) $(BSCS) $(LIBFT) $(CHECK) $(UTILS) -o $(CHECKER)
	
clean :
		$(RM) $(NAME) $(CHECKER)

fclean : clean
		$(RM) $(NAME) $(CHECKER)

re : fclean all