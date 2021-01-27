/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:16:25 by cmarcu            #+#    #+#             */
/*   Updated: 2020/11/30 19:13:17 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_chars(int hundreds, int tens, int units)
{
	ft_putchar(hundreds);
	ft_putchar(tens);
	ft_putchar(units);
	if (!(hundreds == 55 && tens == 56 && units == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int hundreds;
	int tens;
	int units;

	hundreds = 48;
	tens = 49;
	units = 50;
	while (hundreds <= 55 && tens <= 56 && units <= 57)
	{
		print_chars(hundreds, tens, units);
		if (tens == 56)
		{
			hundreds++;
			tens = hundreds + 1;
			units = tens;
		}
		if (units == 57)
		{
			tens++;
			units = tens;
		}
		units++;
	}
}
