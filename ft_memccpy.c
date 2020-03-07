/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:36:56 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/27 16:26:17 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	a;
	unsigned char	*b;
	unsigned char	*d;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	b = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (len)
	{
		while (i <= len)
		{
			d[i] = b[i];
			if (b[i] == a)
				return ((void *)(d + i + 1));
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
