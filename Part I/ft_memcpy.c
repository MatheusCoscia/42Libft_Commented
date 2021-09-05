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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*cd;
	const char	*cs;

	i = 0;
	cd = (char *)dest;
	cs = (char *)src;
	if (cd == cs)
		return (NULL);
/*	enquanto 'n' for diferente de 0 copiaremos os caracteres de source para dest */
	while (n > 0)
	{
		cd[i] = cs[i];
		i++;
		n--;
	}
	return (cd);
}

/*
	Mesmo sendo sendo semelhantes as funcoes MEMCPY e MEMMOVE possuem discrepa\
	cias na maneira as quais chegam em seu resutlado esperado.
	A funcao MEMCPY nao sobrepoem a memoria de destino, ou seja, ela pode conter
	"lixo" ao decorrer de seu resultado.
	A funcao MEMMOVE sobrepoem a memoria de destino, logo, alem de mais segura o
	resultado obtido por ela ira possuir mais precisao.
*/
