/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:31:35 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/06 20:40:33 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, char b, char a)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (c != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int x[3];

	x[0] = '0';
	x[1] = '1';
	x[2] = '2';
	while (x[0] <= '7')
	{
		while (x[1] <= '8')
		{
			while (x[2] <= '9')
			{
				ft_putchar(x[0], x[1], x[2]);
				x[2]++;
			}
			x[1]++;
			x[2] = x[1] + 1;
		}
		x[0]++;
		x[1] = x[0] + 1;
		x[2] = x[1] + 1;
	}
}
