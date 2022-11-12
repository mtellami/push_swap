/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_b_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:06 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 15:59:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_b(t_stack **b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!b || !(*b))
		return ;
	tmp1 = (*b)->head;
	tmp2 = pre_last_node((*b)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*b)->head = tmp2->next;
		tmp2->next = NULL;
	}
}
