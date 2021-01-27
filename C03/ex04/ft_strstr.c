/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:21:59 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 13:19:21 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		compare(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == *to_find && compare(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}
