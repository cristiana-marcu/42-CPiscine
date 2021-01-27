/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:02:16 by cmarcu            #+#    #+#             */
/*   Updated: 2020/11/29 13:08:52 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char capital_n;
	char capital_p;

	capital_n = 'N';
	capital_p = 'P';
	if (n < 0)
		write(1, &capital_n, 1);
	else
		write(1, &capital_p, 1);
}
