/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:47:52 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/13 03:01:11 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
