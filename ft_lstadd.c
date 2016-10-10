/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:01:03 by dboudy            #+#    #+#             */
/*   Updated: 2016/10/07 17:27:05 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *head;

	head = *alst;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
}
