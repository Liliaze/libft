/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:50:57 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/07 16:27:13 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (n--)
	{
		s1[i] = s2[i];
		if ((unsigned char)c == s2[i])
			return (dst + ++i);
		i++;
	}
	return (NULL);
}
