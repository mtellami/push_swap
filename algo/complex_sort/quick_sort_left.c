/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:46:49 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/09 07:59:18 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_node_index_left(t_stack *x, int n)
{
	t_node	*tmp;
	int	i;

	tmp = x->head;
	i = 0;
	while (tmp)
	{
		if (tmp->data == n)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	bubble_sort_left(t_stack **a, t_stack **b, int p)
{
	t_node	*tmp;
	int	i;

	tmp = (*a)->head;
	while(tmp)
	{
		while(tmp)
		{
			if (tmp->data < p)
			{
				i = get_node_index_left((*a), tmp->data);
				break ;
			}
			tmp = tmp->next;
		}
		if (!tmp)
			return ;
		tmp = (*a)->head;
		if (i < (int)stack_size((*a)) / 2)
		{
			while ((*a)->head->data > p && tmp)
			{
				rotate(a);
				ft_putstr("ra\n");
				tmp = tmp->next;
			}
		}
		else
		{
			while ((*a)->head->data > p && tmp)
			{
				r_rotate(a);
				ft_putstr("rra\n");
				tmp = tmp->next;
			}
		}
		push(b, a);
		ft_putstr("pb\n");
	}
}

void	quick_sort_left(t_stack **a, t_stack **b)
{
	t_node	*tmp;
	int p;
	
	p = get_pivot(*a, (int)stack_size(*a) / 2);
	tmp = (*a)->head;
	while(tmp->data < p && tmp)
	{
		push(b, a);
		ft_putstr("pb\n");
		tmp = (*a)->head;
	}
	if (stack_size(*a) > 1)
	{
		r_rotate(a);
		ft_putstr("rra\n");
	}
	while (stack_size(*a))
	{
		if ((*a)->head->data < p)
		{
			push(b, a);
			ft_putstr("pb\n");
			if (stack_size(*a) > 1)
			{
				r_rotate(a);
				ft_putstr("rra\n");
			}
		}
		else if (stack_size(*a) == 1)
		{
			push(b, a);
			ft_putstr("pb\n");
		}
		else
			break ;
	}
	if (stack_size(*a))
		bubble_sort_left(a, b, p);
}
