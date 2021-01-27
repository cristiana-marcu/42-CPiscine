/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:04:15 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 09:17:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;

	a = 0;
	if (size > 1)
	{
		while (src[a] != '\0')
		{
			if (a == size)
			{
				a--;
				break ;
			}
			dest[a] = src[a];
			a++;
		}
	}
	dest[a] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	return (a);
}
