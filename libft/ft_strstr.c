/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:01:12 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/12 16:05:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	while (*big)
	{
		i = 0;
		while (little[i] == big[i])
		{
			if (!little[i + 1])
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (0);
}