/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 10:54:20 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/14 10:17:53 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_len_and_clear(char *dest, char const *src, char c)
{
	int		word;
	int		i;
	int		j;

	j = 0;
	i = 0;
	word = 1;
	while (src[i])
	{
		while (src[i] == c && src[i])
			i++;
		if (src[i] != c && src[i])
			word++;
		while (src[i] != c && src[i])
			dest[j++] = src[i++];
		if (src[i] == c)
			dest[j++] = src[i++];
	}
	while (j <= i)
		dest[j++] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = (char *)malloc(sizeof(*s) * (ft_strlen((char *)s) + 1));
	if (!tmp)
		return (NULL);
	tab = (char **)malloc(sizeof(*s) * ft_len_and_clear(tmp, s, c));
	if (!tab)
		return (NULL);
	while (tmp[i])
	{
		if (tmp[i] != c && tmp[i])
			tab[j++] = tmp + i;
		while (tmp[i] != c && tmp[i])
			i++;
		if (tmp[i] == c)
			tmp[i++] = '\0';
	}
	tab[j] = NULL;
	free(tmp);
	return (tab);
}
