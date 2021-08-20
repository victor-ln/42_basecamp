/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:26:15 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/12 23:49:34 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char *base;

	base = "0123456789abcdef";
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_putchar(base[*str / 16]);
			ft_putchar(base[*str % 16]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
