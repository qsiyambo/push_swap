/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:33:57 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:18:13 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		pos_return(t_stack **b_stk, int fst, int lst)
{
	int pos;

	pos = 0;
	if (fst != 0)
	{
		if ((fst - 1) <= ((ft_lstlen(b_stk) - lst) + 1))
			pos = fst;
		else
			pos = lst;
	}
	return (pos);
}

void	handler(t_stack **a, t_stack **b)
{
	int	len;
	int i;

	i = 1;
	while (i)
	{
		len = ft_lstlen(a);
		handler_assist(a, b, &i, len);
	}
}
