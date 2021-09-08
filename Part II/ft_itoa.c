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
** CONVERTER UM CARACTERE DO TIPO INT PARA UM CARACTERE DO TIPO CHAR
*/

#include "libft.h"

/*	funcao utilizada exclusivamente para retornar o maior numero negativo */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*	funcao que retorna o tamanho de nossa string de inteiros */
int	ft_intsize(int n)
{
	size_t	i;

/*	caso nosso caractere seja negativo devemos garantir a alocacao de um espaco adicional em nossa memoria para o caractere '-' */
	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		i++;
/*	para realizar a contagem da quantidade de caracteres iremos alterar o valor de 'n' a cada loop */
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

/*	nosso size ira contar a quantidade de caracteres de nossa string do tipo int */
	size = ft_intsize(n);
/*	iremos garantir uma alocacao "limpa" de memoria a nossa string */
	str = ft_calloc(size, sizeof(char));
	if (n == -2147483648)
		return (ft_strncpy(str, "-2147483648\0", 12));
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
/*	caso nosso caractere do tipo int seja negativo iremos adicionar o caractere '-' a nossa string */
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
/*	iremos adicionar um caractere nulo '\0' na ultima posicao de nossa string */
	str[size--] = '\0';
	while (n > 0)
	{
/*	a partir da ultima posicao de nossa string iremos adicionar o valor de 'n' convertido como um caractere do tipo char */
		str[size--] = n % 10 + '0';
/*	para realizar a contagem da quantidade de caracteres iremos alterar o valor de 'n' a cada loop */
		n = n / 10;
	}
	return (str);
}
