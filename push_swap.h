/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:14:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 11:07:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
}	t_stack;

// libft functions
void	ft_putstr(char *str);
int		ft_atoi(const char *str);
int		ft_strlen(char *str);
int	ft_isdigit(char c);

// checking functions
int		check_error(int n, char **av);
int		is_sorted(t_node *x);

// linked list functions
void	add_node(t_node **head, t_node *node);
t_node	*new_node(int n);
t_stack	*new_stack(int n, char **tab);
t_node	*pre_last_node(t_node *node);
size_t	stack_size(t_stack *x);

// operators functions
void	push_a(t_stack **a, t_stack **b);
void	push_a(t_stack **b, t_stack **a);
void	r_rotate(t_stack **a);
void	r_rotate(t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_a(t_stack **b);

// the free function
void	free_memory(t_stack **x, t_stack **y);

// simple sort functions
void	simple_sort(t_stack **a, t_stack **b);
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);

// complex sort functions
int	*sorted_array(t_stack *x);
int	get_index(t_stack *x, int n);
void	complex_sort(t_stack **a, t_stack **b);
void	chunks_move_one(t_stack **a, t_stack **b, int *arr, int mid, int chunk, int start, int end);
void	chunks_move_two(t_stack **a, t_stack **b);

#endif