/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:32:08 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/01 11:49:10 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		calculate_number_digits(int number)
{
	int counter;
	int rest;

	rest = number / 1;
	counter = 0;
	while (rest > 0)
	{
		rest = rest / 10;
		counter++;
	}
	return (counter);
}

void	translate_number_to_char(int nb[], int number_size)
{
	while (number_size >= 0)
	{
		if (nb[number_size] == 0)
			ft_putchar('0');
		if (nb[number_size] == 1)
			ft_putchar('1');
		if (nb[number_size] == 2)
			ft_putchar('2');
		if (nb[number_size] == 3)
			ft_putchar('3');
		if (nb[number_size] == 4)
			ft_putchar('4');
		if (nb[number_size] == 5)
			ft_putchar('5');
		if (nb[number_size] == 6)
			ft_putchar('6');
		if (nb[number_size] == 7)
			ft_putchar('7');
		if (nb[number_size] == 8)
			ft_putchar('8');
		if (nb[number_size] == 9)
			ft_putchar('9');
		number_size--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	int number_size;

	number_size = calculate_number_digits(nb);
	int rest;
	int digit[number_size];
	int digit_counter;

	rest = nb;
	digit_counter = 0;
	while (rest > 0)
	{
		digit[digit_counter] = rest % 10;
		rest = rest / 10;
		digit_counter++;
	}
	translate_number_to_char(digit, number_size);
}
