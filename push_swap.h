/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:14:46 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/05 19:19:47 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef	struct	s_node
{
	int data;
	struct s_node *next;
}	t_node;

typedef struct s_stack
{
	t_node *head;
	size_t size;
}	t_stack;

void	push(t_stack **x, t_stack **y);
void	r_rotate(t_stack **x);
void	swap(t_stack **x);
void	rotate(t_stack **x);
void	add_node(t_node **head, t_node *node);
int	ft_atoi(const char *str);
void	ft_putstr(char *str);
t_node	*new_node(int n);
t_stack	*new_stack(int n, char **tab);
t_node	*pre_last_node(t_node *node);
size_t	stack_size(t_stack *x);

#endif