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
** COPIAR UMA STRING A PARTIR DA PRIMEIRA OCORRENCIA DE UM CARACTERE PASSADO
** COMO PARAMETRO ATE SUA ULTIMA OCORRENCIA
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	end;
	char			*str;

/*	caso nao exista nenhum conteudo em nossas strings devemos retornar NULL */
	if (!s1 || !set)
		return (NULL);
/*	procurar a primeira ocorrencia do nosso caractere 'set' passado como parame/tro, deixando sua posicao "armazenada" dentro do nosso ponteiro */
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	end = ft_strlen(s1);
/*	procurar a ultima ocorrencia de nosso caractere 'set' passado como parame/tro, deixando sua posicao "armazenada" dentro de nossa variavel */
	while (ft_strchr(set, s1[end]) && end != 0 )
		end--;
/*	copiar nossa string inicial para nossa string final */
	str = ft_substr(s1, 0, end + 1);
	return (str);
}
