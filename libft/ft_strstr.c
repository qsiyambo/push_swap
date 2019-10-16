/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:44:01 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 14:43:36 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	compare(const char *s1, const char *s2, int i, int *flag)
{
	int j;

	j = 0;
	while ((s1[i + j] == s2[j]) && (s1[i + j] != '\0') && (s2[j] != '\0'))
		j++;
	if (s2[j] == '\0')
		*flag = 0;
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int flag;

	i = 0;
	flag = 1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (flag))
	{
		j = 0;
		if (haystack[i] == needle[j])
			compare(haystack, needle, i, &flag);
		i++;
	}
	if (flag == 0)
		return ((char *)&haystack[i - 1]);
	return (0);
}
