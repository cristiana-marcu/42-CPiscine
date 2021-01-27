/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:11:22 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/16 20:20:56 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char *strcopy;

	strcopy = str;
	while (*strcopy != '\0')
	{
		write(1, strcopy, 1);
		strcopy++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((int)(unsigned char)(s1[i]) - (int)(unsigned char)(s2[i]));
}

void	ft_sort_params(char *tab[], int params)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < params)
	{
		j = i + 1;
		while (j < params)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
