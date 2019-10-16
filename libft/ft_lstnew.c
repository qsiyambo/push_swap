/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:24:54 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/07/05 16:24:59 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		(*list).content = NULL;
		(*list).content_size = 0;
	}
	else
	{
		(*list).content = malloc(content_size);
		if ((*list).content == NULL)
		{
			return (NULL);
		}
		else
		{
			ft_memcpy((*list).content, content, content_size);
			(*list).content_size = content_size;
		}
	}
	(*list).next = NULL;
	return (list);
}
