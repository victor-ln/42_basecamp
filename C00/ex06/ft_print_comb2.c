/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 05:59:34 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/06 21:53:14 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char num)
{
	write(1, &num, 1);
}

void	ft_calculete_num(int um, int dois)
{
	ft_putchar(um / 10 + '0');
	ft_putchar(um % 10 + '0');
	ft_putchar(' ');
	ft_putchar(dois / 10 + '0');
	ft_putchar(dois % 10 + '0');
	if (um != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x[2];

	x[0] = 00;
	x[1] = 00;
	while (x[0] <= 98)
	{
		x[1] = x[0] + 1;
		while (x[1] <= 99)
		{
			ft_calculete_num(x[0], x[1]);
			x[1]++;
		}
		x[0]++;
	}
}
