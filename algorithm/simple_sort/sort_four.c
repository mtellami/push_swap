/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:21:16 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/08 15:26:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min_index4(t_node *x)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = x->data;
	n2 = x->next->data;
	n3 = pre_last_node(x)->data;
	n4 = pre_last_node(x)->next->data;
	if (n1 < n2 && n1 < n3 && n1 < n4)
		return (0);
	else if (n2 < n1 && n2 < n3 && n2 < n4)
		return (1);
	else if (n3 < n1 && n3 < n2 && n3 < n4)
		return (2);
	else
		return (3);
}

void	shift_min_to_top4(t_stack **x)
{
	if (min_index4((*x)->head) == 0)
		return ;
	else if (min_index4((*x)->head) == 1)
	{
		rotate(x);
		ft_putstr("ra\n");
	}
	else if (min_index4((*x)->head) == 2)
	{
		r_rotate(x);
		r_rotate(x);
		ft_putstr("rra\nrra\n");
	}
	else
	{
		r_rotate(x);
		ft_putstr("rra\n");
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	shift_min_to_top4(a);
	if (!(is_sorted((*a)->head)))
	{
		push(b, a);
		ft_putstr("pb\n");
		sort_three(a);
		push(a, b);
		ft_putstr("pa\n");
	}
}