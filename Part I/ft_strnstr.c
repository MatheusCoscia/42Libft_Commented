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
** ENCONTRAR A PRIMEIRA OCORRENCIA DE UMA STRING EM OUTRA STRING ATE UM DETERMI\
** NADO TAMANHO PASSADO COMO PARAMETRO
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	size = ft_strlen(little);
/*	caso 'little' não contenha nenhum caractere, retorne 'big' */
	if (size == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	while (len-- && ft_strncmp(big, little, size) != 0)
	{
/*	caso 'little' possua mais caracteres que o parametro 'len' torna-se impossi\
vel localizar 'little' dentro de 'big' */
		if (size > len)
			return (0);
/*	caso nao exista nenhuma ocorrencia de 'little' em 'big', retorne NULL */
		if (*big++ == '\0')
			return (0);
	}
	return ((char *) big);
}
