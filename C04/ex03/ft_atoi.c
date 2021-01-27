/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:09:38 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/08 18:48:28 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int is_digit(char a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int a;
	int number;
	int minus_counter;
	
	a = 0;
	minus_counter = 0;
	number = 0;
	while (str[a] == 32 || str[a] == '+' || str[a] == '-' || is_digit(str[a]))
	{
		if (str[a] == 32 || str[a] == '+')
			a++;
		else if(str[a] == '-')
		{
			minus_counter++;
			a++;
		}
		else if(is_digit(str[a]))
		{
			while (is_digit(str[a]))
			{
				number = number * 10 + (str[a] - '0');
				a++;
			}
		}
	}
	return (minus_counter % 2 == 0 ? number : -number);
}
