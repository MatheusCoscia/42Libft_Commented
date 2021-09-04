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
** ALOCAR BYTES NULOS EM NOSSA MEMORIA
*/

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
	void	*i;

/*	alocar o tamanho 'memb' + 'size' bytes de memoria para nossa variavel 'i' */
	i = (void *)malloc(sizeof(memb * size));
/*	caso a alocacao de errado devemos retornar NULL */
	if (i == 0)
		return (NULL);
/*	utilizar a funcao bzero para preencher 'i' com caracteres nulos */
	ft_bzero(i, memb);
	return ((void *)i);
}
