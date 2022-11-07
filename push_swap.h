/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:14:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 15:28:16 by mtellami         ###   ########.fr       */
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

int		ft_atoi(const char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	push(t_stack **x, t_stack **y);
void	swap(t_stack **x);
void	r_rotate(t_stack **x);
void	rotate(t_stack **x);
int		check_error(int n, char **av);
void	add_node(t_node **head, t_node *node);
int		is_sorted(t_stack *x);
t_node	*new_node(int n);
t_stack	*new_stack(int n, char **tab);
t_node	*pre_last_node(t_node *node);
size_t	stack_size(t_stack *x);
void	free_memory(t_stack **x, t_stack **y);
int	ft_isdigit(char c);
void	simple_sort(t_stack *a, t_stack *b);
void	complex_sort(t_stack *a, t_stack *b);


#endif