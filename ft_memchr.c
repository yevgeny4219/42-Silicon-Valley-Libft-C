/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:35:18 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/27 20:51:08 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (b[i] == a)
			return (b + i);
		i++;
	}
	return (NULL);
}
