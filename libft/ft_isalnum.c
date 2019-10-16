/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:27:40 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/18 17:09:55 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_digi(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

static	int	ft_alph(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int			ft_isalnum(int c)
{
	if (ft_digi(c) || ft_alph(c))
		return (1);
	else
		return (0);
}
