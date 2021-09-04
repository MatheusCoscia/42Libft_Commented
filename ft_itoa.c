/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:08:54 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/30 15:51:35 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	florinda(int n)
{
	size_t	i;

	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = florinda(n);
	str = ft_calloc(size, sizeof(char));
	if (n == -2147483648)
		return (ft_strncpy(str, "-2147483648\0", 12));
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	str[size--] = '\0';
	while (n > 0)
	{
		str[size--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
