# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aojeda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 14:28:55 by aojeda            #+#    #+#              #
#    Updated: 2023/09/23 16:26:09 by aojeda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARCHIVOS FUENTE
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_memcpy.c ft_strlcpy.c ft_memmove.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c

# GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
OBJS = $(SRC:.c=.o)

# COMPILADOR
CC = gcc

# FLAGS DE COMPILACION
CFLAGS = -Wall -Wextra -Werror

# NOMBRE DEL PROGRAMA
NAME = libft.a

# REGLAS PARA COMPILAR LOS ARCHIVOS FUENTE
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

#
all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# LIMPIAR ARCHIVOS GENERADOS EXCEPTO OBJETOS
clean:
	rm -f $(OBJS)

# LIMPIAR ARCHIVOS GENERADOS INCLUIDO EL EJECUTABLE
fclean: clean
	rm -f $(NAME)

re: fclean all
