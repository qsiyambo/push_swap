/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_chk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:10:44 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 09:03:29 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_arr(char **arr)
{
	int		count;
	int		flag;

	count = 0;
	flag = 1;
	while (arr[count] != NULL)
	{
		flag = ft_isnum(arr[count]);
		if (flag == 0)
			return (0);
		count++;
	}
	return (1);
}

int		check_num(char **arr)
{
	long	num;
	int		count;

	num = 0;
	count = 0;
	while (arr[count] != NULL)
	{
		num = ft_atoll(arr[count]);
		if (num >= 2147483647 || num <= -2147483648)
			return (0);
		count++;
	}
	return (1);
}

int		arg_error(char **arr)
{
	if (check_arr(arr) == 0 || check_num(arr) == 0)
		return (0);
	return (1);
}

int		duplicates(t_stack *stack)
{
	t_stack		*p;
	t_stack		*q;

	p = stack;
	while (p != NULL)
	{
		q = p->next;
		while (q != NULL)
		{
			if (p->num == q->num)
				return (-1);
			q = q->next;
		}
		p = p->next;
	}
	return (1);
}
