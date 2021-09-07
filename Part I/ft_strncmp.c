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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
/*	enquanto 'n' for diferente de 0 e nossa string 1 for diferente da string 2 iremos permanecer no loop */
	while (n--)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
/*	iremos retornar a diferenca entre s1 e s2 ~#consultar valores abaixo */
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
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
