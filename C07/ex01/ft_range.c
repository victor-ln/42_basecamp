/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:53:06 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/16 19:50:32 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*matriz;
	int		i;

	i = 0;
	if (min >= max)
	{
		matriz = NULL;
		return (matriz);
	}
	matriz = (int *)malloc(sizeof(*matriz) * (max - min));
	while (min < max)
	{
		matriz[i] = min;
		min++;
		i++;
	}
	return (matriz);
}
