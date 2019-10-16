/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:20:45 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:20:33 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_int_first(t_stack **a_stk)
{
	int		i;
	t_stack	*temp;
	t_stack	*first;

	i = 1;
	first = *a_stk;
	temp = first->next->next;
	while (temp)
	{
		if ((first->num) > (temp->num))
		{
			i = 0;
		}
		temp = temp->next;
	}
	return (i);
}

int		check_int_sec(t_stack **a_stk)
{
	int		i;
	t_stack *temp;
	t_stack *first;

	i = 1;
	first = *a_stk;
	first = first->next;
	temp = first->next;
	while (temp)
	{
		if ((first->num) > (temp->num))
		{
			i = 0;
		}
		temp = temp->next;
	}
	return (i);
}

void	first_cond(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *first;
	t_stack *second;
	int		len;

	first = *a_stk;
	second = first->next;
	if (first->num > (second->num))
	{
		sort_sa(first);
	}
	if (b_stk)
	{
		len = ft_lstlen(b_stk);
		while (len != 0)
		{
			pa(a_stk, b_stk);
			len--;
		}
	}
}

void	second_cond(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *first;
	t_stack *second;

	first = *a_stk;
	second = first->next;
	if (first->num < (second->num))
	{
		pb(a_stk, b_stk);
	}
	else
	{
		sort_sa(first);
		pb(a_stk, b_stk);
	}
}

void	handler_assist(t_stack **a, t_stack **b, int *indx, int len)
{
	t_stack *temp;

	temp = *a;
	if (check_int_first(a) && check_int_sec(a) && is_sort(temp->next->next))
	{
		first_cond(a, b);
		*indx = 0;
	}
	else if ((check_int_first(a) || check_int_sec(a)) && (len > 3))
	{
		second_cond(a, b);
	}
	else
	{
		if (len == 3)
			sort_three(temp);
		else
			find_min(a);
	}
}
