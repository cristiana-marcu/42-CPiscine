/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:21:54 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/03 10:17:38 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int counter;

	counter = 0;
	while (counter < size)
	{
		aux[size - 1 - counter] = tab[counter];
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		tab[counter] = aux[counter];
		counter++;
	}
}
