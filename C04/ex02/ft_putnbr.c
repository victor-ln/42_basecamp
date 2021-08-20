/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:17:28 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/14 21:13:29 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		i = nb * -1;
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
