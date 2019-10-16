/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:23:37 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 09:03:37 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sort(t_stack *a_stk)
{
	t_stack *temp1;
	t_stack *temp2;
	int		pos;

	temp1 = a_stk;
	temp2 = a_stk->next;
	pos = 1;
	while (temp2 != NULL)
	{
		if (temp1->num > temp2->num)
		{
			pos = 0;
			return (pos);
		}
		temp1 = temp2;
		temp2 = temp2->next;
	}
	return (pos);
}

int		ft_lstlen(t_stack **a_stk)
{
	t_stack *temp;
	int		cnt;

	temp = *a_stk;
	cnt = 0;
	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}

void	free_stacks(t_stack **a_stk)
{
	t_stack *temp;

	while (*a_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->num = 0;
		free(temp);
	}
}

void	free_all(t_stack **a_stk, t_stack **b_stk)
{
	if (*a_stk)
		free_stacks(a_stk);
	if (*b_stk)
		free_stacks(b_stk);
}
