/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:55:43 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/17 00:51:10 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

int		ft_total_lengh(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) + 1) * size - 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = (char*)malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * ft_total_lengh(size, strs, sep));
	if (str == 0)
		return (0);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(str, sep);
		}
		i++;
	}
	return (str);
}
