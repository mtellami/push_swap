/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:10:12 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/08 16:16:35 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_pivot(t_stack *x, int i)
{
	t_node	*tmp;
	
	tmp = x->head;
	while (i--)
		tmp = tmp->next;
	return (tmp->data);
}