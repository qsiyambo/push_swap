/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:12:56 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:15:36 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_first_half(t_stack **a_stk, t_stack **b_stk, int len)
{
	int		mid;
	int		i;
	t_stack *temp;

	mid = mid_value(a_stk, len);
	if (len % 2 == 0)
		i = 0;
	else
		i = -1;
	while (i < (len / 2))
	{
		find_min2(a_stk, mid);
		temp = *a_stk;
		if (temp->num <= mid)
			pb(a_stk, b_stk);
		i++;
	}
	fstmove_to_a(a_stk, b_stk);
	sort_pb_mid(a_stk, b_stk, mid);
	nth_move_to_a(a_stk, b_stk);
	sort_ra_mid(a_stk, mid);
}

void	sort_sec_half(t_stack **a_stk, t_stack **b_stk, int len)
{
	int mid;

	mid = mid_value(a_stk, len);
	sort_sec_assist(a_stk, b_stk, mid, len);
	nth_move_to_a(a_stk, b_stk);
	sort_ra_mid(a_stk, mid);
}

void	sort_ra_mid(t_stack **a_stk, int mid)
{
	t_stack	*temp;

	temp = *a_stk;
	while (temp->num <= mid)
	{
		sort_ra2(a_stk);
		write(1, "ra\n", 3);
		temp = *a_stk;
	}
}

void	sort_pb_mid(t_stack **a_stk, t_stack **b_stk, int mid)
{
	t_stack	*temp;

	temp = *a_stk;
	while (temp->num <= mid)
	{
		pb(a_stk, b_stk);
		temp = *a_stk;
	}
}

void	sort_sec_assist(t_stack **a_stk, t_stack **b_stk, int mid, int len)
{
	t_stack *temp;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (i < len)
	{
		temp = *a_stk;
		if (temp->num <= mid)
			pb(a_stk, b_stk);
		else
		{
			sort_ra2(a_stk);
			write(1, "ra\n", 3);
			k++;
		}
		i++;
	}
	while (k != 0)
	{
		rrr_assist(a_stk, b_stk, mid);
		k--;
	}
}
