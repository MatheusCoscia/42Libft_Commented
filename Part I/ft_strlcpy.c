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
** COPIAR DUAS STRINGS ATE UM DETERMINADO TAMANHO PASSADO COMO PARAMETRO
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (size != 0)
	{
/*	enquanto size for diferente de 0 e nosso source contiver caracteres, iremos copiar cada caractere de source para nosso destino */
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
/*	retorne o tamanho da nossa string source */
	return (ft_strlen(src));
}
