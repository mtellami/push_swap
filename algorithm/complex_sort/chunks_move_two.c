/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_move_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:20:37 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 11:07:46 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest_num(t_stack *x)
{
	t_node	*tmp;
	int	nb;

	tmp = x->head;
	nb = tmp->data;
	while (tmp)
	{
		if (tmp->data > nb)
			nb = tmp->data;
		tmp = tmp->next;
	}
	return (nb);
}

void	chunks_move_two(t_stack **a, t_stack **b)
{
	int	down;
	
	if (!stack_size(*b))
		return ;
	if ((*b)->head->data == biggest_num(*b))
	{
		push(a, b);
		ft_putstr("pa\n");
	}
	else
	{
		if (!down || (*b)->head->data > pre_last_node((*a)->head)->next->data)
		{
			push(a, b);
			rotate(a);
			ft_putstr("pa\nra\n");
			down++;
		}
		else
		{
			if (get_index(*b, biggest_num(*b)) > stack_size(*b) / 2)
			{
				while((*b)->head->data != biggest_num(*b))
				{
					r_rotate(b);
					ft_putstr("rrb\n");
				}
				push(a, b);
				ft_putstr("pa\n");
			}
			else
			{
				while((*b)->head->data != biggest_num(*b))
				{
					rotate(b);
					ft_putstr("rb\n");
				}
				push(a, b);
				ft_putstr("pa\n");
			}
		}
	}
}