/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:51:33 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/11 15:08:04 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	s2 = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s2)
		return (NULL);
	s2[len] = '\0';
	while (s[start + i] && len--)
	{
		s2[i] = s[start + i];
		i++;
	}
	return (s2);
}
