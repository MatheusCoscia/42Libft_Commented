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
** COPIAR UMA STRING A PARTIR DA POSICAO 'start' ATE UM DETERMINADO TAMANHO PAS/
** SADO COMO PARAMETRO
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == 0)
		return (0);
/*	caso nossa posicao inicial esteja alem ou no final de nossa string, iremos retornar " " */
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
/*	para realizar uma alocacao segura de memoria, caso o tamanho de nossa string 's' seja menor que 'len', iremos "alterar" o tamanho de len, fazendo com que ele passe a ter o tamanho de nossa string 's' */
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
/*	alocar memoria para nossa nova string */
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == 0)
		return (0);
/*	realizar a copia da string 's' para nossa nova string */
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
