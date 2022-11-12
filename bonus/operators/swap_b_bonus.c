/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:09:03 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 09:09:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack **b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!b)
		return ;
	tmp1 = (*b)->head;
	tmp2 = (*b)->head->next;
	if (tmp1 && tmp2)
	{
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		(*b)->head = tmp2;
		ft_putstr("sb\n");
	}
}
