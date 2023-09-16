# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 10:17:31 by akovacs-          #+#    #+#              #
#    Updated: 2023/09/12 10:53:32 by akovacs-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#contiene comando que crea libreria\
	ar: Comando usado para crear librerias c\
	\
	r: Para reemplazar archivo existente.\
	c: Para crear archivo si no existe.\
	s: Actualiza el indice del archivo.
LIB = ar rcs

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SOURCE = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c 

all: $(NAME)
	

