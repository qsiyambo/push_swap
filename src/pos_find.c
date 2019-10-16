/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:57:48 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:19:39 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		pos_front(t_stack **a_stk, int max)
{
	t_stack	*temp;
	int		indx1;
	int		indx2;

	indx1 = 0;
	indx2 = 1;
	temp = *a_stk;
	while (temp)
	{
		if ((temp->num) <= max)
		{
			indx1 = indx2;
			break ;
		}
		temp = temp->next;
		indx2++;
	}
	return (indx1);
}

int		pos_back(t_stack **a_stk, int max)
{
	t_stack	*temp;
	int		indx1;
	int		indx2;

	indx1 = 0;
	indx2 = 1;
	temp = *a_stk;
	while (temp)
	{
		if ((temp->num) <= max)
		{
			indx1 = indx2;
		}
		temp = temp->next;
		indx2++;
	}
	return (indx1);
}

int		pos_min(t_stack **b_stk, int max)
{
	t_stack	*temp;
	int		indx1;
	int		indx2;
	int		min;

	indx1 = 0;
	indx2 = 1;
	temp = *b_stk;
	min = temp->num;
	while (temp)
	{
		if ((min >= (temp->num)) && (temp->num <= max))
		{
			min = temp->num;
			indx1 = indx2;
		}
		temp = temp->next;
		indx2++;
	}
	return (indx1);
}

int		pos_max(t_stack **b_stk, int max)
{
	t_stack	*temp;
	int		first;
	int		last;
	int		indx2;

	first = 0;
	last = 0;
	indx2 = 1;
	temp = *b_stk;
	while (temp)
	{
		if (((temp->num) > max) && (first == 0))
			first = indx2;
		else if (((temp->num) > max) && (first != 0))
			last = indx2;
		temp = temp->next;
		indx2++;
	}
	return (pos_return(b_stk, first, last));
}

int		pos_max2(t_stack **b_stk, int max)
{
	t_stack	*temp;
	int		max2;
	int		indx1;
	int		indx2;

	indx1 = 0;
	indx2 = 1;
	temp = *b_stk;
	max2 = temp->num;
	while (temp)
	{
		if ((max2 <= (temp->num)) && ((temp->num) > max))
		{
			max2 = temp->num;
			indx1 = indx2;
		}
		temp = temp->next;
		indx2++;
	}
	return (indx1);
}
