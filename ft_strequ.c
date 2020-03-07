/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:22:37 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/22 13:33:42 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
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
