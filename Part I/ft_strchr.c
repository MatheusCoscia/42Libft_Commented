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
** RETORNAR NOSSA STRING NA PRIMEIRA OCORRENCIA DE UM CARACTERE PASSADO COMO PA\
** RAMETRO
*/

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
/*	quando nossa string atingir o caractere 'c' iremos retornar o momento em que isso ocorre */
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
/*	garantir que retornaremos nossa string ao atingir o caractere 'c' */
	if (src[i] == c)
		return ((char *)src + i);
	return (0);
}
