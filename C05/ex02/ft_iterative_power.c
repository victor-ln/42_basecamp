/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:53:30 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/15 20:06:42 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power >= 1)
	{
		while (power > 1)
		{
			nb *= i;
			--power;
		}
		return (nb);
	}
	if (power == 0)
		return (1);
	return (0);
}
