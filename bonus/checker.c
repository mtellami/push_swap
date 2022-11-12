/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:52:41 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 09:36:13 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_operator(char *buff)
{
	if (ft_strcmp(buff, "sa\n"))
		return (1);
	else if (ft_strcmp(buff, "sb\n"))
		return (2);
	else if (ft_strcmp(buff, "pa\n"))
		return (3);
	else if (ft_strcmp(buff, "pb\n"))
		return (4);
	else if (ft_strcmp(buff, "ra\n"))
		return (5);
	else if (ft_strcmp(buff, "rb\n"))
		return (6);
	else if (ft_strcmp(buff, "rra\n"))
		return (7);
	else if (ft_strcmp(buff, "rrb\n"))
		return (8);
	else
		return (0);
}

int main(int ac, char **av)
{
	char *buffer;
	
	while (get_next_line(0))
		{
			buffer = get_next_line(0);
			if (!buffer)
				return (0);
			if 
		}
}