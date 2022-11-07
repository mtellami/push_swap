/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:10 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/06 20:40:39 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **x)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!x || !(*x))
		return ;
	tmp1 = (*x)->head;
	tmp2 = pre_last_node((*x)->head);
	if (tmp1 && tmp2)
	{
		tmp2->next->next = tmp1;
		(*x)->head = tmp1->next;
		tmp1->next = NULL;
	}
}
