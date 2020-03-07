/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:34:10 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/26 22:24:46 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	i = 0;
	if ((src == NULL) && (dst == NULL))
		return (NULL);
	if (n > 0)
	{
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	return (dst);
}
