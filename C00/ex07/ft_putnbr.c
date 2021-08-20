/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:17:32 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/06 21:53:55 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = nb * -1;
	}
	else
		i = nb;
	if (i > 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
