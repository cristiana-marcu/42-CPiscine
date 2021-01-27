/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:16:00 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 13:08:06 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (n && s1[a] != '\0' && s1[a] == s2[a])
	{
		a++;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (int)(unsigned char)(s1[a]) - (int)(unsigned char)(s2[a]);
}
