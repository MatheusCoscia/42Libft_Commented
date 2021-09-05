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
** ESCREVER UMA STRING
*/

#include "libft.h"

char	florentina(char const *set, char c)
{
	size_t	i;
	size_t	cont;
	int		find;

	i = 0;
	cont = 0;
	find = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c && find == 1)
			find = 0;
		if (set[i] != c && find == 0)
		{
			find = 1;
			cont++;
		}
		i++;
	}
	return (cont);
}

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

	str = (char **)malloc(sizeof(char *) * (florentina(s, c) + 1));
	if (str == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0')
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end > start)
		{
			str[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
