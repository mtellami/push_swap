/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:00 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:46 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **x)
{
	t_node	*tmp1;
	t_node	*tmp2;
	
	if (!x)
		return ;
	tmp1 = (*x)->head;
	tmp2 = (*x)->head->next;
	if (tmp1 && tmp2)
	{
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		(*x)->head = tmp2;
	}
}