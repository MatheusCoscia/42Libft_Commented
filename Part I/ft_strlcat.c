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
** CONCATENAR DUAS STRINGS ATE UM DETERMINADO TAMANHO PASSADO COMO PARAMETRO
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

/*	descobrir o tamanho de nossa string de destino */
	len = ft_strlen(dest);
	i = len;
/*	caso o tamanho de nossa string de destino seja maior que o tamanho 'size' passado como parametro, iremos retornar o tamanho total de nossa string source em adicao ao tamanho de 'size' */
	if (len >= size)
		return (size + ft_strlen(src));
/*	caso o tamanho de nossa string de desitno seja menor que o tamanho 'size' passado como parametro, iremos concatenar nossas strings  */
	while (src[i - len] != '\0' && i + 1 < size)
	{
		dest[i] = src[i - len];
		i++;
	}
	dest[i] = '\0';
/*	retornar o tamanho total de nossa string source em adicao ao tamanho total da nossa string de destino */
	return (len + ft_strlen(src));
}
