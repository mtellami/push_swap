/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:17 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/05 12:03:03 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate(t_stack **x)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (!x || !(*x))
		return ;
	tmp1 = (*x)->head;
	tmp2 = pre_last_node((*x)->head);

	tmp2->next->next = tmp1;
	(*x)->head = tmp2->next;
	tmp2->next = NULL;
}