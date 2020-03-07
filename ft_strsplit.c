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

int			ft_words(char const *str, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 1;
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
	return (count);
}

int			*ft_letter(char const *str, char c)
{
	int i;
	int j;
	int count;
	int *arr;
	int size;

	size = ft_words(str, c);
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			j++;
		else if (str[i] == c && j > 0)
		{
			arr[count] = j + 1;
			count++;
			j = 0;
		}
		arr[count] = j + 1;
		if (size == 2)
			arr[count + 1] = 1;
		i++;
	}
	return (arr);
}

char		**ft_fill(char **ptr, char const *s, char c)
{
	int j;
	int index;

	index = 0;
	while (*s != '\0')
	{
		j = 0;
		if ((*s != '\0') && (*s != c))
		{
			while (*s != c && *s != '\0')
			{
				ptr[index][j] = *s;
				j++;
				s++;
			}
			ptr[index][j] = '\0';
			index++;
		}
		s++;
	}
	ptr[index][0] = '\0';
	return (ptr);
}

char		**ft_memory(char const *str, char c)
{
	int		i;
	int		row;
	int		index;
	int		*arr;
	char	**ptr;

	i = 0;
	index = 0;
	arr = ft_letter(str, c);
	row = ft_words(str, c) + 1;
	ptr = (char **)malloc((row) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (i < row)
	{
		ptr[i] = (char *)malloc((arr[index]) * sizeof(char));
		if (ptr[i] == NULL)
			return (NULL);
		index++;
		i++;
	}
	ptr = ft_fill(ptr, str, c);
	free(arr);
	return (ptr);
}

char		**ft_strsplit(char const *s, char c)
{
	char **ptr;
	ptr = ft_memory(s, c);
	return (ptr);
} 

void		ft_check(char **str)
{
	int i = 0;
	int j;

	while (i < 2)
	{
		if (str[i])
		{
			j = 0;
			while (str[i][j] != '\0')
			{	
				write(1, &str[i][j], 1);
				j++;
			}
		}
		i++;
	}
}

int		main()
{
	char *s = "                  olol";
	char **result2 = ft_strsplit(s, ' ');
	ft_check(result2);
	write(1, "\n", 1);
	//char *a = "split  ||this|for|me|||||!|";
	//char **result = ft_strsplit(a, '|');
	//ft_check(result);
	//write(1, "\n", 1);
	//char *f = "      split       this for   me  !       ";
	/// **result1 = ft_strsplit(f, ' ');
	//ft_check(result1);
	//write(1, "\n", 1);
	return (0);
}