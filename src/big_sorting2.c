/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:30:14 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:16:37 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr_assist(t_stack **a_stk, t_stack **b_stk, int mid)
{
	t_stack *temp;

	temp = *b_stk;
	if ((temp->num) != mid)
	{
		sort_rra2(a_stk);
		sort_rra2(b_stk);
		write(1, "rrr\n", 4);
	}
	else
	{
		sort_rra2(a_stk);
		write(1, "rra\n", 4);
	}
}

void	fstmove_to_a(t_stack **a_stk, t_stack **b_stk)
{
	int		lenb;
	int		mid;
	int		i;

	lenb = ft_lstlen(b_stk);
	mid = mid_value(b_stk, lenb);
	i = 0;
	while (i < lenb)
	{
		find_min_max(b_stk, mid);
		pa_or_ra(a_stk, b_stk, mid);
		i++;
	}
}

void	sort_last_half(t_stack **a_stk, t_stack **b_stk, int len)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < len)
	{
		pb(a_stk, b_stk);
		i++;
	}
	nth_move_to_a(a_stk, b_stk);
	k = len / 2;
	while (k != 0)
	{
		sort_ra2(a_stk);
		write(1, "ra\n", 3);
		k--;
	}
}

void	nth_move_to_a(t_stack **a_stk, t_stack **b_stk)
{
	int		lenb;
	int		mid;
	int		i;

	lenb = ft_lstlen(b_stk);
	mid = mid_value(b_stk, lenb);
	i = 0;
	while (i < lenb)
	{
		find_min_max2(b_stk, mid);
		pa_or_ra(a_stk, b_stk, mid);
		i++;
	}
}

void	pa_or_ra(t_stack **a_stk, t_stack **b_stk, int mid)
{
	t_stack *temp;

	temp = *b_stk;
	if (temp->num <= mid)
	{
		pa(a_stk, b_stk);
		sort_ra2(a_stk);
		write(1, "ra\n", 3);
	}
	else
	{
		pa(a_stk, b_stk);
	}
}
