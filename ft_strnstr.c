/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:38:06 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/20 21:17:46 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t j;
	size_t n;
	
	j = 0;
	n = ft_strlen(needle);
	if ((len == 0) || (*needle == '\0'))
		return ((char *)hay);
	while (*hay && len > 0)
	{
		if (*hay == *needle)
		{
			while (j <= n && *hay && *needle && (*hay == *needle))
			{
				hay++;
				needle++;
				j++;
			}
			if (j == n)
				return ((char *)hay - j);
		}
		if (j != n)
			j = 0; 
		hay++;
		len--;
	}
	return (NULL);
}