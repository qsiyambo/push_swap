/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:16:29 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:19:52 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack *a_stk)
{
	int a;
	int b;
	int c;

	a = a_stk->num;
	b = (a_stk->next)->num;
	c = (a_stk->next->next)->num;
	if ((a > b) && (b < c) && (c > a))
		sort_sa(a_stk);
	else if ((a > b) && (b < c) && (a > c))
		sort_ra(a_stk);
	else if ((b > a) && (b > c) && (a > c))
		sort_rra(a_stk);
	else if ((a > b) && (b > c))
	{
		sort_sa(a_stk);
		sort_rra(a_stk);
	}
	else if ((b > a) && (b > c) && (c > a))
	{
		sort_sa(a_stk);
		sort_ra(a_stk);
	}
}

void	pa(t_stack **b_stk, t_stack **a_stk)
{
	t_stack *temp;

	if (*b_stk == NULL)
	{
		*b_stk = *a_stk;
		*a_stk = (*a_stk)->next;
		(*b_stk)->next = NULL;
	}
	else if (*b_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->next = *b_stk;
		*b_stk = temp;
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *temp;

	if (*b_stk == NULL)
	{
		*b_stk = *a_stk;
		*a_stk = (*a_stk)->next;
		(*b_stk)->next = NULL;
	}
	else if (*b_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->next = *b_stk;
		*b_stk = temp;
	}
	write(1, "pb\n", 3);
}
