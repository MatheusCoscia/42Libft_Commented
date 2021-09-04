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
** CONVERTER UM CARACTERE PARA UM CARACTERE DO TIPO INT
*/

#include "libft.h"

/*	funcao para verificar se nosso caractere e uma letra ou numero */
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		nbr;

	i = 0;
	sign = 1;
	nbr = 0;
/*	verificar se nosso caractere e uma letra ou numero */
	while (ft_isspace(str[i]) == 1)
		i++;
/*	verificar se nosso caractere contem um sinal de positivo ou negativo */
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
/*	caso o ultimo sinal de nossa string seja negativo iremos definir que iremos retornar um caractere do tipo int negativo */
			sign = sign * -1;
		i++;
	}
/*	converter nosso caractere para um caractere do tipo int */
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}
