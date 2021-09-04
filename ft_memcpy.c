/* ************************************************************ */
/*                                                              */
/*             ╓▀▀▀▀▀▀▄                 :::      ::::::::       */
/*            █▀      ▐               :+:      :+:    :+:       */
/*            █   ▀   ▓█            +:+ +:+         +:+         */
/*            █      █▓▓▓▓█       +#+  +:+       +#+            */
/*    ▄▄ ▄▄▄███████─▄▀█▀▀       +#+#+#+#+#+   +#+               */
/*    █ ███████████▄██ ██             #+#    #+#                */
/*    █  █▀▀   ██████████▌           ###   ########.fr          */
/*    █  ▀▄▄    ▀████████▌                                      */
/*     ▀█   ▀ ▄▄▄████████▌      42cursus | MCoscia | matrodri   */
/*        ▀▀  ▄▄▄▄▄▄▄▄▄█▀       quack quack |  vila pescopata   */
/*                                                              */
/* ************************************************************ */

/*
** RETORNAR A DIFERENCA ENTRE DUAS STRING DENTRO DE SEUS PRIMEIROS 'n' CARATERES
*/

/*
** VERIFIQUE A DIFERENCA ENTRE MEMCPY E MEMMOVE
*/

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
