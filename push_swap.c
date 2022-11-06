/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:02 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/06 18:16:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	smaller_index(t_stack *x)
{
	t_node	*tmp;
	int i1;
	int n;
	int i2;

	i1 = 0;
	i2 = 0;
	tmp = x->head;
	n = tmp->data;
	while (tmp)
	{
		if (n < tmp->data)
		{
			n = tmp->data;
			i1 = i2;
		}
		i2++;
		tmp = tmp->next;
	}
	printf("%d\n", i1);
	return (i1);
}
#include <stdio.h>
int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	
	if (ac < 2)
		return (0);
	a = new_stack(ac, av);
	b = new_stack(0, av);
	// if (is_sorted(a))
	// 	return (0);
	t_node *tmp = a->head;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	free(a);
	free(b);
}