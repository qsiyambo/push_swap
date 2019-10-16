/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 08:07:33 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/20 10:27:26 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s2;
	unsigned char c2;

	s2 = (unsigned char*)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (*s2 == c2)
			return ((void *)s2);
		s2++;
	}
	return (NULL);
}
