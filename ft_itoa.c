/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:37:24 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/25 16:13:59 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_intlen(int n)
{
	int count;
	int neg;

	count = 1;
	neg = -1;
	
	if (n < 0)
	{
		n = n * neg;
		count++;
	}
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int		i;
	int		nb;
	int		size;
	char	*ptr;

	i = 0;
	nb = n % 10;
	if (n == -2147483648)
		{
			ptr = ft_strdup("-2147483648");
			return (ptr);
		}
	size = ft_intlen(n) + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[size - 1] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
		i = 1;
	}
	while ((size - 1) > i)
	{
		ptr[size - 2] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (ptr);
}
