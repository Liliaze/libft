/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:15:33 by dboudy            #+#    #+#             */
/*   Updated: 2016/09/05 11:42:42 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_trace_i(unsigned int i, int nb)
{
	ft_color("31", "34");
	ft_putstr("trace int n°");
	ft_putnbr(i);
	ft_putstr(" = ");
	ft_putnbr(nb);
	ft_putstr(".\n");
	ft_color("", "");
}
