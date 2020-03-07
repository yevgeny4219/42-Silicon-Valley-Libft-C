/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:52:36 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/22 19:07:00 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (s != NULL)
	{
		ptr = (char *)malloc((len + 1) * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		while (s[start] != '\0' && i < len)
		{
			ptr[i] = s[start];
			i++;
			start++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
