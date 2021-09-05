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
** COPIAR O CONTEUDO DE SOURCE PARA DEST DENTRO DE SEUS PRIMEIROS 'n' CARATERES
*/

/*
** VERIFIQUE A DIFERENCA ENTRE MEMCPY E MEMMOVE
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
/*	atribuir variaveis para copiar os caracteres de source para dest a partir da primeira posicao ou da ultima posicao do comprimento de 'n' */
	char		*cdst;
	const char	*cscr;
	char		*rev_dst;
	const char	*rev_src;

	cdst = dest;
	cscr = src;
	rev_dst = cdst + (n - 1);
	rev_src = cscr + (n - 1);
	if (dest == src || n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest < src)
/*	copiar do primeiro caractere ao caractere da posicao 'n' */
		while (n--)
			*cdst++ = *cscr++;
	else
/*	copiar do ultimo caractere ao caractere da posicao 'n' */
		while (n--)
			*rev_dst-- = *rev_src--;
	return (dest);
}

/*
	Mesmo sendo sendo semelhantes as funcoes MEMCPY e MEMMOVE possuem discrepa\
	cias na maneira as quais chegam em seu resutlado esperado.
	A funcao MEMCPY nao sobrepoem a memoria de destino, ou seja, ela pode conter
	"lixo" ao decorrer de seu resultado.
	A funcao MEMMOVE sobrepoem a memoria de destino, logo, alem de mais segura o
	resultado obtido por ela ira possuir mais precisao.
*/
