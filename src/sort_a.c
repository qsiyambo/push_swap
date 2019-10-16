/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:18:48 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:20:49 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_sa(t_stack *a_stk)
{
	int temp;

	temp = (a_stk->next)->num;
	(a_stk->next)->num = a_stk->num;
	a_stk->num = temp;
	write(1, "sa\n", 3);
}

void	sort_ra(t_stack *a_stk)
{
	int temp1;
	int temp2;
	int temp3;

	temp1 = a_stk->num;
	temp2 = (a_stk->next)->num;
	temp3 = (a_stk->next->next)->num;
	(a_stk->next->next)->num = temp1;
	(a_stk->next)->num = temp3;
	a_stk->num = temp2;
	write(1, "ra\n", 3);
}

void	sort_rra(t_stack *a_stk)
{
	int temp1;
	int temp2;
	int temp3;

	temp1 = a_stk->num;
	temp2 = (a_stk->next)->num;
	temp3 = (a_stk->next->next)->num;
	a_stk->num = temp3;
	(a_stk->next)->num = temp1;
	(a_stk->next->next)->num = temp2;
	write(1, "rra\n", 4);
}

void	sort_rra2(t_stack **a_stk)
{
	t_stack *temp1;
	t_stack *temp2;

	temp1 = *a_stk;
	temp2 = (*a_stk)->next;
	while ((temp2->next) != NULL)
	{
		temp1 = temp2;
		temp2 = temp2->next;
	}
	temp2->next = *a_stk;
	temp1->next = NULL;
	*a_stk = temp2;
}

void	sort_ra2(t_stack **a_stk)
{
	t_stack *temp1;
	t_stack *temp2;

	temp1 = *a_stk;
	temp2 = (*a_stk)->next;
	while ((temp2->next) != NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;
	*a_stk = temp1->next;
	temp1->next = NULL;
}
