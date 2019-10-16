/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:57:10 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 09:04:18 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	display_stack(t_stack *a_stk)
{
	t_stack *temp;

	temp = a_stk;
	while (temp)
	{
		ft_putnbr(temp->num);
		write(1, "\n", 1);
		temp = temp->next;
	}
}
