/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:47 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/07 09:07:12 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	s;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	s = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			s *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = (n * 10) + (*str++ - 48);
	return (n * s);
}
