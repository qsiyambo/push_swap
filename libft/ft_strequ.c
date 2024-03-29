/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:18:23 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/26 15:38:55 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1) && (s2))
	{
		while (*s1 == *s2)
		{
			if (!(*s1) || !(*s2))
				return (1);
			else if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
				return (1);
			s1++;
			s2++;
		}
	}
	return (0);
}
