/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:22:42 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 11:00:04 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack *a;
	t_stack *b;
	int		ret;

	a = NULL;
	b = NULL;
	ret = 0;
	if (argc > 1)
	{
		if ((a = create_list(argc - 1, argv)) != NULL)
		{
			if ((ret = duplicates(a)) != -1)
			{
				sort_stacks(&a, &b);
			}
		}
		free_all(&a, &b);
	}
	return (0);
}
