/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:35:18 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/22 13:44:14 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (s1 != NULL && s1 != NULL)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && i < n)
		{
			if (s1[i] != s2[i])
				count = 1;
			i++;
		}
		if (count == 0)
			return (1);
		return (0);
	}
	return (0);
}
