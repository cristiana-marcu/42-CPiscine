/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:45:09 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/13 14:39:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	else
		return (1);
}
