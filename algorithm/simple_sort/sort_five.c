/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:22:21 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/08 15:26:34 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min_index5(t_node *x)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int n5;

	n1 = x->data;
	n2 = x->next->data;
	n3 = x->next->next->data;
	n4 = pre_last_node(x)->data;
	n5 = pre_last_node(x)->next->data;
	if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
		return (0);
	else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
		return (1);
	else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
		return (2);
	else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
		return (3);
	else
		return (4);
}

void	shift_min_to_top5(t_stack **x)
{
	if (min_index5((*x)->head) == 0)
		return ;
	else if (min_index5((*x)->head) == 1)
	{
		rotate(x);
		ft_putstr("ra\n");
	}
	else if (min_index5((*x)->head) == 2)
	{
		rotate(x);
		rotate(x);
		ft_putstr("ra\nra\n");
	}
	else if (min_index5((*x)->head) == 3)
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

void	sort_five(t_stack **a, t_stack **b)
{
	shift_min_to_top5(a);
	if (!(is_sorted((*a)->head)))
	{
		push(b, a);
		ft_putstr("pb\n");
	}
	sort_four(a, b);
	push(a, b);
	ft_putstr("pa\n");
}
