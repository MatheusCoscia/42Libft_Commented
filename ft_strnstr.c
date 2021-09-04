/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:25:47 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/30 14:21:11 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
			if (big[i + j] != little[j])
				return (0);
		}
		i++;
	}
	return (0);
}
