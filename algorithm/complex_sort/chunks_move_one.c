/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_move_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:06:08 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/11 08:23:55 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunks_move_one(t_stack **a, t_stack **b, int *arr, int mid, int chunk, int start, int end)
{
	int arr_size;
	t_node	*tmp;
	
	arr_size = sizeof(arr) / sizeof(arr[0]);
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
				while ((*a)->head->data < arr[start] || (*a)->head->data > arr[end])
				{
					r_rotate(a);
					ft_putstr("rra\n");
				}
				push(b, a);
				ft_putstr("pb\n");
				if (tmp->data < mid)
				{
					rotate(b);
					ft_putstr("rb\n");
				}
			}
			else
			{
				while ((*a)->head->data < arr[start] || (*a)->head->data > arr[end])
				{
					rotate(a);
					ft_putstr("ra\n");
				}
				push(b, a);
				ft_putstr("pb\n");
				if (tmp->data < mid)
				{
					rotate(b);
					ft_putstr("rb\n");
				}
			}
			tmp = (*a)->head;
		}
		else
			tmp = tmp->next;
	}
	chunks_move_one(a, b, arr, mid, chunk, start, end);
}
