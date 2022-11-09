/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:26:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/08 17:24:24 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack **a, t_stack **b)
{
	while (stack_size((*a)))
		quick_sort_left(a, b);
	while (stack_size((*b)))
		quick_sort_right(b, a);
}