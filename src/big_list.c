/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:43:42 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/14 13:14:46 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	a_stk_ra_rra(t_stack **a_stk, int pos1, int pos2, int len)
{
	a_rmove(a_stk, pos1, pos2, len);
}

void	a_rmove(t_stack **a_stk, int posx, int posy, int len)
{
	if ((posx - 1) <= ((len - posy) + 1))
	{
		while (posx != 1)
		{
			sort_ra2(a_stk);
			posx--;
			write(1, "ra\n", 3);
		}
	}
	else
	{
		while (posy != (len + 1))
		{
			sort_rra2(a_stk);
			posy++;
			write(1, "rra\n", 4);
		}
	}
}

void	b_rmove(t_stack **b_stk, int posx, int posy, int len)
{
	if ((posx - 1) <= ((len - posy) + 1))
	{
		while (posx != 1)
		{
			sort_ra2(b_stk);
			posx--;
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (posy != (len + 1))
		{
			sort_rra2(b_stk);
			posy++;
			write(1, "rrb\n", 4);
		}
	}
}

void	b_stk_2_ra_rra(t_stack **b_stk, int pos1, int pos2, int len)
{
	if (pos1 < pos2)
	{
		b_rmove(b_stk, pos1, pos2, len);
	}
	else
	{
		b_rmove(b_stk, pos2, pos1, len);
	}
}

void	b_stk_1_ra_rra(t_stack **b_stk, int pos1, int pos2, int len)
{
	if (pos2 == 0)
	{
		b_rmove(b_stk, pos1, pos1, len);
	}
	else if (pos1 == 0)
	{
		b_rmove(b_stk, pos2, pos2, len);
	}
}
