/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:50:32 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/09 20:36:14 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int rev_tab;
	int i;

	i = 0;
	size--;
	while (i < size)
	{
		rev_tab = tab[i];
		tab[i] = tab[size];
		tab[size] = rev_tab;
		i++;
		size--;
	}
}
