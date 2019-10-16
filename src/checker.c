/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:42:55 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 10:59:41 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/get_next_line.h"

int		read_stdin(t_stack **a_stk, t_stack **b_stk)
{
	char	*line;

	while (get_next_line(0, &line) == 1)
	{
		if (check_steps(line) == 0)
		{
			free(line);
			return (-1);
		}
		do_steps(line, a_stk, b_stk);
		free(line);
	}
	return (1);
}

void	start_read(t_stack **a_stk, t_stack **b_stk)
{
	char	*line;
	int		ret;

	line = NULL;
	ret = -1;
	while (get_next_line(0, &line) == 1)
	{
		if ((ret = do_steps(line, a_stk, b_stk)) == 0)
			break ;
		free(line);
		line = NULL;
	}
	if (ret == 1 || ret == -1)
	{
		if (is_sort(*a_stk) && (ft_lstlen(b_stk) == 0))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	else
	{
		ft_putendl_fd("Error", 2);
	}
}

int		main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
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
				start_read(&a, &b);
			}
		}
		if (a == NULL || (ret == -1))
			ft_putendl_fd("Error", 2);
		free_all(&a, &b);
	}
	return (0);
}
