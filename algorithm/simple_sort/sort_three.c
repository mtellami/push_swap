/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:42 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/08 14:09:15 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	n1;
	int	n2;
	int	n3;

	if(is_sorted((*a)->head))
		return ;
	n1 = (*a)->head->data;
	n2 = (*a)->head->next->data;
	n3 = (*a)->head->next->next->data;
	if (n1 > n2 && n2 < n3 && n3 > n1)
	{
		swap(a);
		ft_putstr("sa\n");
	}
	else if (n1 > n2 && n2 > n3)
	{
		swap(a);
		ft_putstr("sa\n");
		r_rotate(a);
		ft_putstr("rra\n");
	}
	else if (n1 > n2 && n2 < n3 && n3 < n1)
	{
		rotate(a);
		ft_putstr("ra\n");
	}
	else if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		swap(a);
		ft_putstr("sa\n");
		rotate(a);
		ft_putstr("ra\n");
	}
	else
	{
		r_rotate(a);
		ft_putstr("rra\n");
	}
}