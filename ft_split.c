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
** DIVIDIR UMA STRING SEMPRE QUE HOUVER A OCORRENCIA DE UM CARACTERE 'c' PASSADO
** COMO PARAMETRO
*/

#include "libft.h"

/*	funcao para identificar a quantidade de caracteres finais de nossa string */
int	ft_strfind(char const *set, char c)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (set[i] != '\0')
	{
/*	dentro de nossa string temos que procurar por um caractere que seja difer\
ente do caractere 'c' passado como parametro  */
		while (set[i] == c)
			i++;
/*	caso o caractere encontrado seja diferente de 'c' e tambem diferente do fi\
nal da palavra iremos incrimentar nosso contador */
		if (set[i] != '\0')
			cont++;
		i++;
	}
	return (cont);
}

/*	funcao para duplicar nossa string ~#conferir ft_strdup */
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * n + 1);
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**str;

/*	alocar o espaço de memoria para que nossa nova string receba o conteudo de 's' apos cada divisao */
	str = (char **)malloc(sizeof(char *) * (ft_strfind(s, c) + 1));
	if (str == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0')
	{
/*	encontrar a primeira ocorrencia de 'c' em nossa string 's' */
		while (s[end] == c)
			end++;
/*	definir a posicao inicial em que 's' sera duplicado */
		start = end;
/*	encontrar a ultima ocorrencia de 'c' em nossa string 's' */
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end > start)
		{
/*	 */
			str[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
