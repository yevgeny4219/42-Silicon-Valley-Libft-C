/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 23:10:56 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/03/02 15:52:24 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			neg;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
	|| str[i] == '\v' || str[i] == ' ' || str[i] == '\0'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res *= neg;
	return (res);
}
