/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:51:10 by dboudy            #+#    #+#             */
/*   Updated: 2016/10/10 15:03:34 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	const *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_putstrn(char	const *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	write(1, "\n", 1);
}
