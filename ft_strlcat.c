/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:10:41 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/21 20:32:38 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (dest[n] && n < size)
		n++;
	i = n;
	while (src[n - i] && n + 1 < size)
	{
		dest[n] = src[n - i];
		n++;
	}
	if (i < size)
		dest[n] = '\0';
	return (i + ft_strlen(src));
}
