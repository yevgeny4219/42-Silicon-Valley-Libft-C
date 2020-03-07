/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:10:05 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/03/02 18:38:46 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = ft_memalloc(len1);
	if (ptr == NULL)
		return (NULL);
	while (s2[i] != '\0')
	{
		while (s1[j] != '\0')
		{
			ptr[j] = s1[j];
			j++;
		}
		ptr[i + j] = s2[i];
		i++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
