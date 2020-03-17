/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yepeliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:07:03 by yepeliuk          #+#    #+#             */
/*   Updated: 2020/02/24 16:33:51 by yepeliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int            ft_words(char const *str, char c)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    while (str[i] != '\0')
    {
      if (str[i] != c)
          j++;
      else if (str[i] == c && j > 0)
        {
          count++;
          j = 0;
        }
        i++;
    }
    if (j > 0)
        count++;
    return (count);
}

int		ft_letters(const char *str, char c)
{
	int count;

	count = 0;
	while (*str == c)
		str++;
	while (*str != c && *str)
	{
		count++;
		str++;
	}
	return (count);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	if (!*str || (!(ptr = (char **)malloc((ft_words(str, c) + 1) * sizeof(char *)))))
		return (NULL);
	while (*str) 
	{
		while (*str == c)
			str++;
		if (*str != c)
		{
			if (!(ptr[i] = (char *)malloc((ft_letters(str, c) + 1) * sizeof(char))))
				return (NULL);
			j = 0;
			while (*str != c && *str)
				ptr[i][j++] = (char)*str++;
			ptr[i][j] = '\0';
			i++;
		}
		ptr[i] = 0;
	}
	return (ptr);
}