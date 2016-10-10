/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 16:33:10 by dboudy            #+#    #+#             */
/*   Updated: 2016/10/07 17:26:38 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	t_list *head;

	head = lst;
	ft_putstr("-------- Start debug list -------- \n");
	while (head != NULL)
	{
		ft_putstr((char *)head->name);
		ft_putstr("|\n");
		head = head->next;
	}
	ft_putstr("-------- End of debug list -------- \n");
}
