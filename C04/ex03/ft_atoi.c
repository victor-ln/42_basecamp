/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:34:36 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/14 20:52:14 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int x[2];

	x[0] = 1;
	x[1] = 0;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
	{
		while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				x[0] *= -1;
			str++;
		}
		str++;
	}
	str--;
	while (*str >= '0' && *str <= '9')
	{
		x[1] = x[1] * 10 + ((int)(*str - '0'));
		str++;
	}
	return (x[0] * x[1]);
}
