/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:03:16 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 09:43:19 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int i;

	i = 0;
	if (((c >= 32) && (c <= 126)) || (c == 0))
	{
		while ((s[i]) || (c == 0))
		{
			if (s[i] == c)
				return ((char *)(s + i));
			else if ((s[i + 1] == 0) && (c != 0))
				return (0);
			i++;
		}
	}
	return (0);
}