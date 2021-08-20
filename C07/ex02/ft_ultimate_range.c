/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:17:05 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/16 19:46:41 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*matriz;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (range);
	}
	matriz = (int *)malloc(sizeof(*matriz) * (max - min));
	while (min < max)
	{
		matriz[i] = min;
		min++;
		i++;
	}
	*range = matriz;
	return (i);
}
