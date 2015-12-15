/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:41:36 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/11 14:43:23 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*new;
	int		i;

	i = (int)size;
	new = malloc(sizeof(void) * i);
	if (!new)
		return (NULL);
	while (i >= 0)
	{
		ft_bzero(new, size);
		i--;
	}
	return (new);
}
