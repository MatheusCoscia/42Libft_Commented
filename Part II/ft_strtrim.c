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

char	florentina(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

/*	procurar a primeira ocorrencia do caractere 'set' passado como parametro */
	start = 0;
	while (s1[start] != '\0' && florentina(set, s1[start]))
		start++;
/*	procurar a ultima ocorrencia do caractere 'set' passado como parametro */
	end = ft_strlen(s1);
	while (florentina(set, s1[end - 1]))
		end--;
/*	alocar espaco na memoria para que nossa nova string receba o conteudo de 's1' */
	str = (char *)malloc(sizeof(char) * (*s1 + (end - start + 1)));
	i = 0;
/*	copiar o conteudo da minha string 's1' a partir da posicao inicial para minha nova string */
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
