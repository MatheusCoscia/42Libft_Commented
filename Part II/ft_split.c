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

/*	funcao para identificar a quantidade de strigns a serem subdivididas */
int    ft_findstr(char const *str, char c)
{
    int        words;
    int        control;

    words = 0;
    control = 0;
    while (*str)
    {
/*	sempre que o proximo caractere de nossa string for diferente do caractere 'c' e nossa variavel de 'controle' for 0 sabemos que uma nova subdivisao de nossa string devera ser criada */
        if (*str != c && control == 0)
        {
            control = 1;
            words++;
        }
/*	quando o proximo caractere de nossa string for igual nosso caractere 'c', alteramos nossa variavel de 'controle' para 0, avisando o programa que estamos entrando novamente em uma subdivisao */
        else if (*str == c)
            control = 0;
        str++;
    }
/*	retornar o total de subdivisoes possiveis */
    return (words);
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
	str = (char **)malloc(sizeof(char *) * (ft_findstr(s, c) + 1));
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
/*	copiar a string que nao contenha o caractere 'c', fazendo assim com que ela seja dividida */
			str[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
