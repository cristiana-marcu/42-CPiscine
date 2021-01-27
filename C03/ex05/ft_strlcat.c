/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:37:49 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/09 13:55:07 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	string_size(char *str)
{
	int		str_length;

	str_length = 0;
	while (*str != '\0')
	{
		str_length++;
		str++;
	}
	return (str_length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				a;
	int				dest_length;
	int				src_length;
	unsigned int	offset;

	dest_length = string_size(dest);
	src_length = string_size(src);
	a = 0;
	offset = dest_length;
	while (src[a] != '\0')
	{
		dest[offset] = src[a];
		offset++;
		a++;
		if (offset == size - 1)
			break ;
	}
	dest[offset] = '\0';
	return (dest_length + src_length);
}
