/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pw_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:09:35 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:20:15 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		mid_value(t_stack **a_stk, int len)
{
	t_stack		*temp;
	int			*arr;
	int			i;
	int			mid;

	i = 0;
	mid = 0;
	arr = malloc(sizeof(int) * len);
	temp = *a_stk;
	while (i < len)
	{
		arr[i] = temp->num;
		temp = temp->next;
		i++;
	}
	sort_tab(arr, len);
	if (len % 2 == 0)
		mid = arr[(len / 2) - 1];
	else
		mid = arr[len / 2];
	free(arr);
	return (mid);
}

int		check_int(t_stack *a_stk)
{
	int		i;
	t_stack *temp;

	i = 1;
	temp = a_stk->next;
	while (temp)
	{
		if ((a_stk->num) > (temp->num))
		{
			i = 0;
		}
		temp = temp->next;
	}
	return (i);
}

void	sort_tab(int *arr, int len)
{
	int i;
	int temp;
	int j;

	i = 0;
	while (i < (len - 1))
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	sort_stacks(t_stack **a_stk, t_stack **b_stk)
{
	int		len;

	if (is_sort(*a_stk) == 0)
	{
		len = ft_lstlen(a_stk);
		if (len >= 50)
		{
			sort_first_half(a_stk, b_stk, len);
			len = len / 2;
			sort_sec_half(a_stk, b_stk, len);
			len = len / 2;
			sort_last_half(a_stk, b_stk, len);
		}
		else if ((len >= 3) && (len < 50))
			handler(a_stk, b_stk);
		else if (len == 2)
			sort_sa(*a_stk);
	}
}
