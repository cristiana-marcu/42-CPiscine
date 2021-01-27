/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:27:35 by cmarcu            #+#    #+#             */
/*   Updated: 2020/11/29 12:31:35 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		write(1, &ascii, 1);
		ascii--;
	}
}
