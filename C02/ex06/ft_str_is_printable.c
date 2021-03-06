/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:59:52 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/07 13:58:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	if (str[0] == '\0')
		return (1);
	return (1);
}
