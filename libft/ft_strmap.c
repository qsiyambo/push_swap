/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:03:06 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/20 10:45:04 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*ptr2;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = ft_memalloc((size_t)ft_strlen((char*)s) + 1);
	if (!str)
		return (NULL);
	ptr = (char*)s;
	ptr2 = str;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	return (str);
}
