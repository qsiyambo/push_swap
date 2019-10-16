/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:28:15 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 10:41:09 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	chksort_ss(t_stack **a_stk, t_stack **b_stk)
{
	chksort_sa(*a_stk);
	chksort_sa(*b_stk);
}

void	chksort_rr(t_stack **a_stk, t_stack **b_stk)
{
	chksort_ra2(a_stk);
	chksort_ra2(b_stk);
}

void	chksort_rrr(t_stack **a_stk, t_stack **b_stk)
{
	chksort_rra2(a_stk);
	chksort_rra2(b_stk);
}

int		check_steps(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (1);
	else if (ft_strcmp(str, "pa") == 0)
		return (1);
	else if (ft_strcmp(str, "pb") == 0)
		return (1);
	else if (ft_strcmp(str, "ra") == 0)
		return (1);
	else if (ft_strcmp(str, "rb") == 0)
		return (1);
	else if (ft_strcmp(str, "rra") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb") == 0)
		return (1);
	else if (ft_strcmp(str, "ss") == 0)
		return (1);
	else if (ft_strcmp(str, "rr") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr") == 0)
		return (1);
	else
		return (0);
}

int		do_steps(char *str, t_stack **a_stk, t_stack **b_stk)
{
	if (ft_strcmp(str, "sa") == 0)
		chksort_sa(*a_stk);
	else if (ft_strcmp(str, "sb") == 0)
		chksort_sa(*b_stk);
	else if (ft_strcmp(str, "pa") == 0)
		chksort_pa(a_stk, b_stk);
	else if (ft_strcmp(str, "pb") == 0)
		chksort_pb(a_stk, b_stk);
	else if (ft_strcmp(str, "ra") == 0)
		chksort_ra2(a_stk);
	else if (ft_strcmp(str, "rb") == 0)
		chksort_ra2(b_stk);
	else if (ft_strcmp(str, "rra") == 0)
		chksort_rra2(a_stk);
	else if (ft_strcmp(str, "rrb") == 0)
		chksort_rra2(b_stk);
	else if (ft_strcmp(str, "ss") == 0)
		chksort_ss(a_stk, b_stk);
	else if (ft_strcmp(str, "rr") == 0)
		chksort_rr(a_stk, b_stk);
	else if (ft_strcmp(str, "rrr") == 0)
		chksort_rrr(a_stk, b_stk);
	else
		return (0);
	return (1);
}
