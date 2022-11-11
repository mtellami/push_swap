/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:26:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 11:08:42 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack **a, t_stack **b)
{
	int	*arr;
	int	n;
	int	mid;
	int	chunk;
	int	start;
	int	end;

	arr = sorted_array(*a);
	if (stack_size(*a) < 10)
		n = 5;
	else if (stack_size(*a) < 150)
		n = 8;
	else
		n = 15;
	mid = stack_size(*a) / 2;
	chunk = stack_size(*a) / n;
	start = mid;
	end = mid;
	chunk_move_one(a, b, arr, mid, chunk, start, end);
	chunk_move_two(a, b);
	free(arr);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
}
