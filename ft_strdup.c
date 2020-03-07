/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:37:58 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/19 22:38:01 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	char	*b;

	b = (char *)s1;
	i = 0;
	while (b[i] != '\0')
		i++;
	ptr = (char*)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (b[i])
	{
		ptr[i] = b[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
