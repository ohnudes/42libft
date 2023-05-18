# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 14:32:57 by nmaturan          #+#    #+#              #
#    Updated: 2023/05/18 14:18:10 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Include
INC = libft.h

# Flags al compilar
FLAGS = -Wall -Wextra -Werror

# Functions
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	  ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_calloc.c ft_strdup.c

# Objects
OBJ = $(SRC:.c=.o)

#### Compilacion del programa ####

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $(OBJ) $(INC) 

$(OBJ): $(SRC)
	@cc -c $(FLAGS) $< -o $@

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
