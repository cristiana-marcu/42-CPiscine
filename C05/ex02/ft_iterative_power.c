/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:20:51 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/11 14:30:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
}
