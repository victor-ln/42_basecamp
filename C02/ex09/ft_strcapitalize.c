/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 02:06:30 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/12 23:50:17 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_str_lowercase(str);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (!(*(str - 1) >= 'a' && *(str - 1) <= 'z'))
				if (!(*(str - 1) >= 'A' && *(str - 1) <= 'Z'))
					if (!(*(str - 1) >= '0' && *(str - 1) <= '9'))
						*str -= 32;
		}
		str++;
	}
	return (str);
}
