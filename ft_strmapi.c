/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:04:03 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/11 15:03:27 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	i = 0;
	while (s[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	s2[i] = '\0';
	i--;
	while (i >= 0)
	{
		s2[i] = f(i, s[i]);
		i--;
	}
	return (s2);
}
