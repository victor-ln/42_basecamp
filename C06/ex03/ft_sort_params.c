/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:40:59 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/16 14:51:05 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*menor;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				menor = argv[j];
				argv[j] = argv[i];
				argv[i] = menor;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_sort(argc, argv);
	while (--argc > 0)
	{
		while (*argv[argc] != '\0')
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
		write(1, "\n", 1);
	}
}
