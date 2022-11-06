/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:23 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/05 18:58:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **x, t_stack **y)
{
	t_node	*tmp1;
	t_node	*tmp2;
	
	if (!x || !y)
		return ;
	tmp1 = (*x)->head;
	tmp2 = (*y)->head;
	
	(*x)->head = tmp2;
	(*y)->head = tmp2->next;
	(*x)->head->next = tmp1;
	(*x)->size++;
	(*y)->size--;
}



