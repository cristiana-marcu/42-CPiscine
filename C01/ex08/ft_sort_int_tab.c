/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:23:05 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/03 10:14:18 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int out_counter;
	int in_counter;
	int a;

	out_counter = 0;
	in_counter = 1;
	while (out_counter < size)
	{
		while (in_counter < size)
		{
			if (tab[out_counter] > tab[in_counter])
			{
				a = tab[in_counter];
				tab[in_counter] = tab[out_counter];
				tab[out_counter] = a;
			}
			in_counter++;
		}
		out_counter++;
		in_counter = out_counter + 1;
	}
}
