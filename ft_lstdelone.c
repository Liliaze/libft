/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 15:59:45 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/10 19:41:25 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*element;

	if (!alst || !del || !*alst)
		return ;
	element = *alst;
	del(element->content, element->content_size);
	free(element);
	*alst = NULL;
}
