/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 08:36:35 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/10 18:36:07 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*translate_to_char(int size, int *result, char *base);
int		base_is_valid(char *base);
void	change_base(int nbr, int base_size, char *char_base);
void	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_is_valid(char *base)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (base[a] != '\0')
	{
		if (base[a] == '+' || base[a] == '-')
			return (0);
		b = a + 1;
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	if (a == 0 || a == 1)
		return (0);
	return (a);
}

int		result_size(int nbr, int base_size)
{
	int a;

	a = 0;
	while (nbr != 0)
	{
		nbr = nbr / base_size;
		a++;
	}
	return (a);
}

void	change_base(int nbr, int base_size, char *char_base)
{
	int		rest;
	int		result[100];
	int		a;
	int		b;

	rest = 0;
	a = 0;
	while (nbr != 0)
	{
		rest = nbr % base_size;
		nbr = nbr / base_size;
		result[a] = rest;
		a++;
	}
	b = a - 1;
	while (b >= 0)
	{
		ft_putchar(char_base[result[b]]);
		b--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		a;
	unsigned int	base_size;
	unsigned int	unsnbr;

	a = 0;
	base_size = base_is_valid(base);
	if (base_size > 1)
	{
		if (nbr == -2147483648)
		{
			unsnbr = nbr * -1;
			ft_putchar('-');
			change_base(unsnbr, base_size, base);
		}
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
			change_base(unsnbr, base_size, base);
		}
		change_base(nbr, base_size, base);
	}
	else
		return ;
}
