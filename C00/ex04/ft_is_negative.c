/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:24:27 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/05 22:11:34 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	char nn;
	char p;

	nn = 'N';
	p = 'P';
	if (n >= 0)
		write(1, &p, 1);
	else
		write(1, &nn, 1);
}
