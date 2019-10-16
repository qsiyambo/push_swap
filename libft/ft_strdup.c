/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:52:35 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 13:20:05 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	dst = (char *)malloc((len + 1) * sizeof(char));
	ptr = dst;
	if (ptr)
	{
		while (*s1)
			*dst++ = *s1++;
		*dst = '\0';
		return (ptr);
	}
	return (NULL);
}
