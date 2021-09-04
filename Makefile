# ************************************************************ #
#                                                              #
#             ╓▀▀▀▀▀▀▄                 :::      ::::::::       #
#            █▀      ▐               :+:      :+:    :+:       #
#            █   ▀   ▓█            +:+ +:+         +:+         #
#            █      █▓▓▓▓█       +#+  +:+       +#+            #
#    ▄▄ ▄▄▄███████─▄▀█▀▀       +#+#+#+#+#+   +#+               #
#    █ ███████████▄██ ██             #+#    #+#                #
#    █  █▀▀   ██████████▌           ###   ########.fr          #
#    █  ▀▄▄    ▀████████▌                                      #
#     ▀█   ▀ ▄▄▄████████▌      42cursus | MCoscia | matrodri   #
#        ▀▀  ▄▄▄▄▄▄▄▄▄█▀       quack quack |  vila pescopata   #
#                                                              #
# ************************************************************ #

#	* CRIAR UM MAKEFILE PARA COMPILAR NOSSA LIB *	#

#	* gerar um arquivo tipo .a ~arquivo responsavel por criar nossa lib
NAME	= libft.a
#	* comando para compilar nossas funcoes
CFLAGS	= -Wall -Werror -Wextra
CC	= gcc
#	* funcoes que devem ser compiladas atraves de nosso makefile
SRCS    = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c

#	* criar nosso arquivo executavel
#	* substituir todos arquivos com extencao .c para extencao .o
OBJS	= $(SRCS:%.c=%.o)

#	* "regras" para que nosso makefile seja executado
all:	$(NAME)

$(NAME):	$(OBJS)
#	* ar ~criar nosso arquivo
#	* -r ~"read" adiciona ou modifica um arquivo ja criado
#	* -c ~suprime a mensagem de ar no terminal
#	* -s ~"refresh explorer"
	ar -rcs $(NAME) $(OBJS)

#	* deletar a forca todos os arquivos .o criados por nosso makefile
clean:
	rm -rf $(OBJS)

#	* deletar a forca todos os arquivos .a criados por nosso makefile
fclean: clean
	rm -f $(NAME)

#	* deletar a forca todos os arquivos criados por nosso makefile
re:	fclean all

#	* impedir que nosso programa deixe de funcionar caso exista alguma pasta ou\
arquivo com o nome de uma de nossas "regras"
.PHONY:	all clean fclean re
