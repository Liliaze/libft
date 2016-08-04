/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort_insert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 10:00:03 by dboudy            #+#    #+#             */
/*   Updated: 2016/08/04 10:00:10 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_lststrcmp(t_list *a, t_list *b)
{
	return (ft_strcmp((char*)a->content, (char*)b->content));
}

t_list	*ft_lstparent(t_list *lst, t_list *item)
{
	while (lst)
	{
		if (item == lst->next)
			return (lst);
		lst = lst->next;
	}
	return (0);
}

t_list	*ft_lstswap(t_list *root, t_list *a, t_list *b)
{
	t_list	*bnext;
	t_list	*parent;

	parent = ft_lstparent(root, a);
	if (parent)
		parent->next = b;
	else
		root = b;
	bnext = b->next;
	b->next = a;
	a->next = bnext;
	return (root);
}

void	ft_lstinsert(t_list **parent, t_list *item)
{
	if (!*parent)
		*parent = item;
	else
	{
		item->next = (*parent)->next;
		(*parent)->next = item;
	}
}

void	ft_lstsort(t_list **lst, int (*cmp)(t_list *, t_list *))
{
	t_list	*x;

	if (!*lst)
		return ;
	x = *lst;
	while (x->next)
	{
		if (cmp(x, x->next) > 0)
		{
			*lst = ft_lstswap(*lst, x, x->next);
			x = *lst;
		}
		else
			x = x->next;
	}
}