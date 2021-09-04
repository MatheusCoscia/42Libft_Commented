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

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*joao;
	char	*maria;

	i = 0;
	joao = (char *)s1;
	maria = (char *)s2;
/*	enquanto 'n' for diferente de 0 e nossa string 1 for diferente da string 2 iremos permanecer no loop */
	while (n--)
	{
		if (joao[i] != maria[i])
/*	iremos retornar a diferenca entre s1 e s2 ~#consultar valores abaixo */
			return ((unsigned char) joao[i] - (unsigned char) maria[i]);
		i++;
	}
	return (0);
}

/*
	os valores retornados devarao ser:
	se s1 > s2 | retornaremos um valor positivo
	se s1 < s2 | retornaremos um valor negativo
	se s1 = s2 | retornaremos 0
*/
