# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 10:17:31 by akovacs-          #+#    #+#              #
#    Updated: 2023/10/08 02:08:34 by akovacs-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#contiene comando que crea libreria\
	ar: Comando usado para crear librerias c\
	\
	r: Para reemplazar archivo existente.\
	c: Para crear archivo si no existe.\
	s: Actualiza el indice del archivo.
AR = ar rcs

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

SRC = ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strchr.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_tolower.c\
ft_toupper.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c

all: $(NAME)
	
$(NAME): $(OBJ) $(INCLUDE)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
