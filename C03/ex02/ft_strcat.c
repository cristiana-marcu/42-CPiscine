/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:58:28 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 13:16:50 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[b + a] = src[b];
		b++;
	}
	dest[b + a] = '\0';
	return (dest);
}