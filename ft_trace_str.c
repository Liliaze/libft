/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:17:48 by dboudy            #+#    #+#             */
/*   Updated: 2016/09/05 11:42:58 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_trace_str(unsigned int i, char *str)
{
	ft_color("31", "36");
	ft_putstr("trace str n°");
	ft_putnbr(i);
	ft_putstr(" = [");
	ft_putstr(str);
	ft_putstr("].\n");
	ft_color("", "");
}
