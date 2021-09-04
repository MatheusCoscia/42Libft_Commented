/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:10:08 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/21 14:48:55 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdst;
	const char	*cscr;
	char		*rev_dst;
	const char	*rev_src;

	cdst = dest;
	cscr = src;
	rev_dst = cdst + (n - 1);
	rev_src = cscr + (n - 1);
	if (dest == src || n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		while (n--)
			*cdst++ = *cscr++;
	else
		while (n--)
			*rev_dst-- = *rev_src--;
	return (dest);
}
