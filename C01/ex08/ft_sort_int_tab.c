/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:16:35 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/12 02:57:07 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ordered(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;

	while (!ordered(tab, size))
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	}
}
