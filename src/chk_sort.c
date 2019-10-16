/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:29:18 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 09:04:09 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	chksort_sa(t_stack *a_stk)
{
	int temp;

	if (a_stk)
	{
		if (a_stk->next != NULL)
		{
			temp = (a_stk->next)->num;
			(a_stk->next)->num = a_stk->num;
			a_stk->num = temp;
		}
	}
}

void	chksort_rra2(t_stack **a_stk)
{
	t_stack *temp1;
	t_stack *temp2;

	if ((*a_stk)->next != NULL)
	{
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
}

void	chksort_ra2(t_stack **a_stk)
{
	t_stack *temp1;
	t_stack *temp2;

	if ((*a_stk)->next != NULL)
	{
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
}

void	chksort_pa(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *temp;

	if (*b_stk)
	{
		if (*a_stk == NULL)
		{
			*a_stk = *b_stk;
			*b_stk = (*b_stk)->next;
			(*a_stk)->next = NULL;
		}
		else if (*a_stk)
		{
			temp = *b_stk;
			*b_stk = (*b_stk)->next;
			temp->next = *a_stk;
			*a_stk = temp;
		}
	}
}

void	chksort_pb(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *temp;

	if (*a_stk)
	{
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
	}
}
