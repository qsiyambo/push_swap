/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:03:04 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/25 11:10:06 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) > 0)
	{
		return (1);
	}
	else if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) < 0)
	{
		return (-1);
	}
	else
	{
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	}
}
