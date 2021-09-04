/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:10:02 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/21 12:35:08 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*cd;
	const char	*cs;

	i = 0;
	cd = (char *)dest;
	cs = (char *)src;
	if (cd == cs)
		return (NULL);
	while (n > 0)
	{
		cd[i] = cs[i];
		i++;
		n--;
	}
	return (cd);
}
