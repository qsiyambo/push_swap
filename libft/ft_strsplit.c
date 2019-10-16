/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:04:31 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/08/30 21:06:47 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_wrds(char const *str, char c)
{
	int word;
	int i;

	word = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == c) && (str[i] != '\0'))
		{
			i++;
		}
		if ((str[i] != c) && (str[i] != '\0'))
		{
			while ((str[i] != c) && (str[i] != '\0'))
			{
				i++;
			}
			word++;
		}
	}
	return (word);
}

char const	*fill_words(char **str_str, char const *s, char c)
{
	int			j;
	char const	*ptr;

	ptr = s;
	j = 0;
	while ((*(ptr + j) != c) && (*(ptr + j) != '\0'))
		j++;
	*str_str = (char *)malloc(j + 1);
	j = 0;
	while ((*(ptr + j) != c) && (*(ptr + j) != '\0'))
	{
		*(*(str_str) + j) = *(ptr + j);
		j++;
	}
	*(*(str_str) + j) = '\0';
	return (ptr + j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**word_str;
	int		r;
	int		words;

	r = 0;
	if (!s)
		return (NULL);
	words = count_wrds(s, c);
	word_str = (char **)malloc(sizeof(char *) * (words + 1));
	if (word_str)
	{
		while (r < words)
		{
			while ((*(s) == c) && (*(s) != '\0'))
				s++;
			if ((*(s) != c) && ((*(s) != '\0')))
				s = fill_words((word_str + r), s, c);
			r++;
		}
		word_str[r] = NULL;
		return (word_str);
	}
	else
		return (NULL);
}
