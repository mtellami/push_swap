/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:02 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 15:31:59 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = new_stack(ac, av);
	b = new_stack(0, av);
	if (check_error(ac, av))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (is_sorted(a))
	{
		free_memory(&a, &b);
		// printf("sorted");
		return (0);
	}
	if (ac < 7)
		simple_sort(a, b);
	else
		complex_sort(a, b);
	free_memory(&a, &b);
	return (0);
}
