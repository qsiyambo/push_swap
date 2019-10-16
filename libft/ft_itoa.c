/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:12:04 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/19 08:54:59 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_negative(int cnt, int n)
{
	char *str;

	str = (char *)malloc(cnt + 2);
	cnt = cnt + 1;
	if (str)
	{
		str[cnt] = '\0';
		cnt--;
		while (cnt >= 1)
		{
			str[cnt--] = (-1) * (n % 10) + '0';
			n = n / 10;
		}
		str[cnt] = '-';
	}
	return (str);
}

static	char	*ft_positive(int cnt, int n)
{
	char *str;

	str = (char *)malloc(cnt + 1);
	if (str)
	{
		str[cnt] = '\0';
		cnt--;
		while (cnt >= 0)
		{
			str[cnt--] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int		cnt;
	int		sum;
	char	*ptr;

	ptr = NULL;
	cnt = 0;
	sum = n;
	while (sum != 0)
	{
		sum = sum / 10;
		cnt++;
	}
	if (n == 0)
		cnt = 1;
	if (n >= 0)
		ptr = ft_positive(cnt, n);
	else if (n < 0)
		ptr = ft_negative(cnt, n);
	return (ptr);
}
