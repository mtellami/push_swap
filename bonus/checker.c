/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:52:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 17:39:04 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shifting(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strcmp(str, "ra\n"))
		rotate_a(a);
	else if (!ft_strcmp(str, "rb\n"))
		rotate_b(b);
	else if (!ft_strcmp(str, "rr\n"))
	{
		rotate_a(a);
		rotate_b(b);
	}
	else if (!ft_strcmp(str, "rra\n"))
		r_rotate_a(a);
	else if (!ft_strcmp(str, "rrb\n"))
		r_rotate_b(b);
	else if (!ft_strcmp(str, "rrr\n"))
	{
		r_rotate_a(a);
		r_rotate_b(b);
	}
}

void	applying_inst(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		swap_a(a);
	else if (!ft_strcmp(str, "sb\n"))
		swap_b(b);
	else if (!ft_strcmp(str, "ss\n"))
		{
			swap_a(a);
			swap_b(b);
		}
	else if (!ft_strcmp(str, "pa\n"))
		push_a(a, b);
	else if (!ft_strcmp(str, "pb\n"))
		push_b(b, a);
	else
		shifting(a, b, str);
}

void	get_instructions(t_stack **a, t_stack **b)
{
	char	*buffer;
	char	*inst;

	inst = "sa\nsb\nss\npa\npb\nra\nrb\nrr\nrra\nrrb\nrrr\n";
	while ((buffer = get_next_line(0, 10)))
	{
		if (!ft_strstr(inst, buffer))
		{
			free(buffer);
			write(2, "Error\n", 6);
			return ;
		}
		applying_inst(a, b, buffer);
		free(buffer);
	}
	if (is_sorted((*a)->head) && !(*b)->size)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	if (check_error(ac, av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	a = new_stack(ac, av);
	b = new_stack(0, av);
	get_instructions(&a, &b);
	free_memory(&a, &b);
	return (0);
}
