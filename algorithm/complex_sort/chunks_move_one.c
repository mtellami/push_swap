/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_move_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:06:08 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 16:37:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunks_move_one(t_stack **a, t_stack **b, int *arr, int s, int mid, int chunk, int start, int end)
{
	int		arr_size;
	t_node	*tmp;

	arr_size = s;
	if (!stack_size(*a))
		return ;
	if (start - chunk < 0)
		start = 0;
	else
		start -= chunk;
	if (end + chunk > arr_size - 1)
		end = arr_size;
	else
		end += chunk;
	tmp = (*a)->head;
	while (tmp)
	{
		if (tmp->data >= arr[start] && tmp->data <= arr[end])
		{
			if (get_index((*a), tmp->data) > arr_size / 2)
			{
				while ((*a)->head->data < arr[start]
					|| (*a)->head->data > arr[end])
					r_rotate_a(a);
				push_b(b, a);
				if (tmp->data < mid)
					rotate_b(b);
			}
			else
			{
				while ((*a)->head->data < arr[start]
					|| (*a)->head->data > arr[end])
				{
					rotate_a(a);
				}
				push_b(b, a);
				if (tmp->data < mid)
					rotate_b(b);
			}
			tmp = (*a)->head;
		}
		else
			tmp = tmp->next;
	}
	chunks_move_one(a, b, arr, s, mid, chunk, start, end);
}
