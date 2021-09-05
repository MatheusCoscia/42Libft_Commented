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
** CONVERTER CARACTERES DO TIPO INT PARA CARACTERES DO TIPO CHAR E ESCREVE-LOS
*/

#include "libft.h"

/*	atraves da recursividade iremos escrever cada caractere de 'n' apos conver\
te-lo de int para char */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
/*	caso 'n' seja negativo iremos retorna-lo como positivo e escrever o sinal de negativo */
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
/*	converter nosso caractere de int para char e escreve-lo */
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48, fd);
/*	caso 'n' possua mais de um caractere */
	else
	{
/*	retornar o primeiro caractere atraves da recursão */
		ft_putnbr_fd(n / 10, fd);
/*	retornar os caracteres adajacentes ate que todos tenham sido escritos */
		ft_putnbr_fd(n % 10, fd);
	}
}

/*
	Como funciona a recursividade de nossa funcao caso 'n' contenha mais de um caractere?
	Vamos supor que 'n' seja igual a 589463...
	n = 589463 / 10 = 5
	n = 589463 % 10 = 89463
	~recursão
	n = 5							n = 89463
	ft_putchar_fd(n + 48, fd)		n = 89463 / 10 = 8
									n = 89463 % 10 = 9463
	~recursão...
*/
