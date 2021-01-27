/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:13:34 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/10 19:20:16 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb >= 1)
			return nb * ft_recursive_factorial(nb - 1);
		else
			return 1;
	}
	else
		return (0);
}
