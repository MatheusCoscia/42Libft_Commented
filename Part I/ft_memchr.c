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
** RETORNAR A PRIMEIRA OCORRENCIA DE UM CARACTERE DENTRO DOS PRIMEROS 'n' CARA\
** TERES DE UMA STRING
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
/*	enquanto nosso 'n' for diferente de 0 iremos permanecer buscando o caracte\ re passado como parametro em nosso source */
	while (n--)
	{
		if (src[i] == c)
/*	iremos retornar nosso source a partir da primeira ocorrencia de nosso cara\ tere passado como parametro */
			return (src + i);
		i++;
	}
/*	caso o caractere passado como parametro nao for encontrado, ou 'n' chegue a 0 sem encontrar nosso caractere passado como parametro, iremos retornar 0 */
	return (0);
}
