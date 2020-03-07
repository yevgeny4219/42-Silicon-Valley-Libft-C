/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:22:16 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/03/01 20:39:14 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;
	int		index;

	i = 0;
	index = -1;
	a = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			index = i;
		else if (s[i + 1] == a)
			index = i + 1;
		i++;
	}
	if (index > -1)
		return ((char *)s + index);
	return (NULL);
}
