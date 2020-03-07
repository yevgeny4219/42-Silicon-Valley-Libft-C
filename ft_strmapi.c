/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:53:29 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/22 13:21:03 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	char			*b;

	i = 0;
	if (s != NULL)
	{
		b = (char *)s;
		ptr = ft_memalloc(ft_strlen(s) + 1);
		if (ptr == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			ptr[i] = f(i, b[i]);
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
