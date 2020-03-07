/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:50:42 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/20 13:07:20 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*d;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	d = (char *)b;
	while (i < len)
	{
		d[i] = a;
		i++;
	}
	return (b);
}
