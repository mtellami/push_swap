/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:10 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 15:59:05 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!a || !(*a))
		return ;
	tmp1 = (*a)->head;
	tmp2 = pre_last_node((*a)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*a)->head = tmp1->next;
		tmp1->next = NULL;
	}
}
