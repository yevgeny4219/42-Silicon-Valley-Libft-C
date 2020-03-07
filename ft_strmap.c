/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:32:47 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/22 13:09:40 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;
	char	*b;

	i = 0;
	if (s != NULL)
	{
		b = (char *)s;
		ptr = ft_memalloc(ft_strlen(s) + 1);
		if (ptr == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			ptr[i] = f(b[i]);
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
