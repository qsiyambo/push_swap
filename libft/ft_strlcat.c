/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:19:27 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 13:28:45 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while ((src[j] != '\0') && (k < (dstsize - dst_len - 1)))
	{
		dst[i + j] = src[j];
		j++;
		k++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
