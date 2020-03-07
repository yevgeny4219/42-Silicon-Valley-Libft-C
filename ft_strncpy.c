/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:36:17 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/29 16:19:25 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int n;

	i = 0;
	n = (int)len;
	if (n > 0)
	{
		while (src[i] != '\0' && i < n)
		{
			dst[i] = src[i];
			i++;
		}
		if (n > i)
		{
			while (i < n)
			{
				dst[i] = '\0';
				i++;
			}
		}
	}
	return (dst);
}
