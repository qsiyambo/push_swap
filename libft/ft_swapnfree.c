/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapnfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:57:31 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/07/05 14:57:40 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swapnfree(void **var, void *new_val)
{
	void	*temp;

	temp = new_val;
	free(*var);
	*var = temp;
}
