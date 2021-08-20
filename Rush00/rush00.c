/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:49:10 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/04 23:49:15 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int px;
	int py;

	py = 0;
	while (++py <= y)
	{
		px = 0;
		while (++px <= x)
		{
			if (py == 1 || py == y)
				if (px == 1 || px == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			else if (px == 1 || px == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
