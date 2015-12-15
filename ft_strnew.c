/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:30:25 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/11 14:49:59 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	i = ((int)(size) + 1);
	if (!(new = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	while (i >= 0)
	{
		new[i] = '\0';
		i--;
	}
	return (new);
}
