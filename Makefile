# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 10:17:31 by akovacs-          #+#    #+#              #
#    Updated: 2023/10/29 21:28:10 by akovacs-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#contiene comando que crea libreria\
	ar: Comando usado para crear librerias c\
	\
	r: Para reemplazar archivo existente.\
	c: Para crear archivo si no existe.\
	s: Actualiza el indice del archivo.
AR = ar rcs
RM = rm
NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBRARY = libft.h

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
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c

SRC_BONUS = ft_lstnew.c\
	    ft_lstadd_front.c\
	    ft_lstsize.c\
	    ft_lstlast.c\
	    ft_lstadd_back.c\
	    ft_lstdelone.c\
	    ft_lstclear.c\
	    ft_lstiter.c\
	    ft_lstmap.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ) $(LIBRARY)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

bonus: $(OBJ) $(OBJ_BONUS) 
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
