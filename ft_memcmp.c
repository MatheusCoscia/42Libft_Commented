/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:14:22 by matrodri          #+#    #+#             */
/*   Updated: 2021/08/24 15:21:10 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*joao;
	char	*maria;

	i = 0;
	joao = (char *)s1;
	maria = (char *)s2;
	while (n--)
	{
		if (joao[i] != maria[i])
			return ((unsigned char) joao[i] - (unsigned char) maria[i]);
		i++;
	}
	return (0);
}
