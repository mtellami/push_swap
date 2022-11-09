/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:47:59 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/09 07:47:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_node_index_right(t_stack *x, int n)
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

void	bubble_sort_right(t_stack **b, t_stack **a, int p)
{
	t_node	*tmp;
	int	i;

	tmp = (*b)->head;
	while(tmp)
	{
		while(tmp)
		{
			if (tmp->data < p)
			{
				i = get_node_index_right((*b), tmp->data);
				break ;
			}
			tmp = tmp->next;
		}
		if (!tmp)
			return ;
		tmp = (*b)->head;
		if (i < (int)stack_size((*b)) / 2)
		{
			while ((*b)->head->data > p && tmp)
			{
				rotate(b);
				ft_putstr("rb\n");
				tmp = tmp->next;
			}
		}
		else
		{
			while ((*b)->head->data > p && tmp)
			{
				r_rotate(b);
				ft_putstr("rrb\n");
				tmp = tmp->next;
			}
		}
		push(a, b);
		ft_putstr("pa\n");
	}
}

void	quick_sort_right(t_stack **b, t_stack **a)
{
	t_node	*tmp;
	int p;
	
	p = get_pivot(*b, (int)stack_size(*b) / 2);
	tmp = (*b)->head;
	while(tmp->data < p && tmp)
	{
		push(a, b);
		ft_putstr("pa\n");
		tmp = (*b)->head;
	}
	if (stack_size(*b) > 1)
	{
		r_rotate(b);
		ft_putstr("rrb\n");
	}
	while (stack_size(*b))
	{
		if ((*b)->head->data < p)
		{
			push(a, b);
			ft_putstr("pa\n");
			if (stack_size(*b) > 1)
			{
				r_rotate(b);
				ft_putstr("rrb\n");
			}
		}
		else if (stack_size(*b) == 1)
		{
			push(a, b);
			ft_putstr("pa\n");
		}
		else
			break ;
	}
	if (stack_size(*b))
		bubble_sort_right(b, a, p);
}
