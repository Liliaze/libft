/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:48:48 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/14 10:30:50 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstnew(void const *name, size_t name_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (name)
	{
		if ((new->name = malloc(name_size)) == NULL)
		{
			new->name_size = 0;
			return (NULL);
		}
		ft_memcpy(new->name, name, name_size);
		new->name_size = name_size;
	}
	else
	{
		new->name = NULL;
		new->name_size = 0;
	}
	new->next = NULL;
	return (new);
}
