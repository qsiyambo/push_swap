/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:54:19 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:18:28 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_min_max(t_stack **b_stk, int max)
{
	int pos1;
	int pos2;
	int len;

	pos1 = pos_min(b_stk, max);
	pos2 = pos_max(b_stk, max);
	len = ft_lstlen(b_stk);
	if ((pos1 != 0) && (pos2 != 0))
	{
		b_stk_2_ra_rra(b_stk, pos1, pos2, len);
	}
	else
	{
		b_stk_1_ra_rra(b_stk, pos1, pos2, len);
	}
}

void	find_min_max2(t_stack **b_stk, int max)
{
	int pos1;
	int pos2;
	int len;

	pos1 = pos_min(b_stk, max);
	pos2 = pos_max2(b_stk, max);
	len = ft_lstlen(b_stk);
	if ((pos1 != 0) && (pos2 != 0))
	{
		b_stk_2_ra_rra(b_stk, pos1, pos2, len);
	}
	else
	{
		b_stk_1_ra_rra(b_stk, pos1, pos2, len);
	}
}

void	find_min2(t_stack **a_stk, int max)
{
	int pos1;
	int pos2;
	int len;

	pos1 = pos_front(a_stk, max);
	pos2 = pos_back(a_stk, max);
	len = ft_lstlen(a_stk);
	a_stk_ra_rra(a_stk, pos1, pos2, len);
}

int		find_min(t_stack **a_stk)
{
	t_stack	*min;
	t_stack	*temp;
	int		indx;
	int		indx2;

	min = *a_stk;
	temp = min->next;
	indx = 0;
	indx2 = 1;
	while (temp)
	{
		if ((min->num) > (temp->num))
		{
			min = temp;
			indx = indx2;
		}
		temp = temp->next;
		indx2++;
	}
	find_min_assist(a_stk, indx, indx2);
	return (indx2);
}

void	find_min_assist(t_stack **a_stk, int indx, int indx2)
{
	if (indx <= (indx2 / 2))
	{
		while (indx != 0)
		{
			sort_ra2(a_stk);
			indx--;
			write(1, "ra\n", 3);
		}
	}
	else
	{
		while (indx != indx2)
		{
			sort_rra2(a_stk);
			indx++;
			write(1, "rra\n", 4);
		}
	}
}
