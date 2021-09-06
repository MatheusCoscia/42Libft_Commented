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
** RETORNAR NOSSA STRING NA ULTIMA OCORRENCIA DE UM CARACTERE PASSADO COMO PA\
** RAMETRO
*/

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

/*	descobrir o tamanho total de nossa string para que a partir de seu ultimo caractere possamos procurar uma ocorrencia de 'c' */
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	return (0);
}
