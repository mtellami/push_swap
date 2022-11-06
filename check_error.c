/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:11:18 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/06 16:24:13 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	is_overflow(char *str)
{
	if (str[0] == '-' && ft_atoi(str) > 0)
		return (1);
	else if (str[0] != '-' && ft_atoi(str) < 0)
		return (1);
	return (0);
}

int check_error(int n, char **av)
{
	int i;
	int j;

	i = n - 1;
	while (i)
	{
		if (!(is_number(av[i])) || is_overflow(av[i]))
			return (1);
		i--;
	}
	i = n - 1;
	while (i > 1)
	{
		j = i - 1;
		while (j)
		{
			if (ft_strlen(av[i]) == ft_strlen(av[j]) && !(ft_strcmp(av[i], av[j])))
				return (1);
			j--;
		}
		i--;
	}
	return (0);
}