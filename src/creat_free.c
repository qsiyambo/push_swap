/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:11:10 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/18 09:03:21 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_stack	*create_node(char *str)
{
	t_stack	*node;
	int		data;

	node = (t_stack*)malloc(sizeof(t_stack) * 1);
	data = ft_atoi(str);
	node->num = data;
	node->next = NULL;
	return (node);
}

void			add_end(t_stack **start, t_stack *ptr)
{
	t_stack	*temp;

	if ((*start) == NULL)
	{
		ptr->next = NULL;
		(*start) = ptr;
	}
	else
	{
		temp = (*start);
		while (temp->next)
			temp = temp->next;
		temp->next = ptr;
		ptr->next = NULL;
	}
}

t_stack			*create_list(int n, char **av)
{
	int		count;
	int		j;
	char	**arr;
	t_stack	*start;
	t_stack	*temp;

	start = NULL;
	count = 0;
	while (count < n)
	{
		arr = ft_strsplit(av[count + 1], ' ');
		j = 0;
		while (arr[j] != NULL)
		{
			if (arg_error(arr) == 0)
				return (NULL);
			temp = create_node(arr[j]);
			add_end(&start, temp);
			j++;
		}
		free_split(arr);
		count++;
	}
	return (start);
}

void			free_split(char **str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}
