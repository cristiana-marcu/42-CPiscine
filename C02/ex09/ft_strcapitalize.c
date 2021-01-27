/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:53:08 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 08:55:07 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	ft_strlowercase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (a == 0)
				str[a] = str[a] - 32;
			else if (!((str[a - 1] >= 97 && str[a - 1] <= 122) ||
						(str[a - 1] >= 65 && str[a - 1] <= 90) ||
						(str[a - 1] >= 48 && str[a - 1] <= 57)))
				str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
