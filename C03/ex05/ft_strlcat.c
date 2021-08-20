/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:43:20 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/14 20:44:57 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	j;
	unsigned int 	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i])
		i++;
	while (src[res])
		++res;
	res += i;
	while (src[j] != '\0' && (j + 1) < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}
