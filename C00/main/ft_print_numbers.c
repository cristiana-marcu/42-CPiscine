/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:50:13 by cmarcu            #+#    #+#             */
/*   Updated: 2020/11/29 13:00:24 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int ascii_number;

	ascii_number = 48;
	while (ascii_number <= 57)
	{
		write(1, &ascii_number, 1);
		ascii_number++;
	}
}
