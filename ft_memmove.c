/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:36:36 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/19 22:36:40 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	int	i;
	int b;

	b = (int)len;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if ((source < dest) && (b < 0))
		{
			while (i <= b)
			{
				dest[b] = source[b];
				b--;
			}
		}
	else
		while (i < b)
		{
			dest[i] = source[i];
			i++;
		}	
	return (dest);
}