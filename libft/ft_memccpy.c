/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 07:49:15 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 09:17:52 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	int				i;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		if (src2[i] == (unsigned char)c)
		{
			dst2[i++] = (unsigned char)c;
			return ((void*)&dst2[i]);
		}
		else
			dst2[i] = src2[i];
		i++;
	}
	return (NULL);
}
