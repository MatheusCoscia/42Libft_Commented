/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:10:24 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/23 16:44:47 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	if (src[i] == c)
		return ((char *)src + i);
	return (0);
}
