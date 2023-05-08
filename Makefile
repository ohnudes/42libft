# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 12:05:19 by nmaturan          #+#    #+#              #
#    Updated: 2023/05/08 12:05:32 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Flags al compilar
FLAGS = -Wall -Wextra -Werror

# Linker
LNK = ar rc

# Functions
SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_isascii.c \
	  ft_toupper.c ft_tolower.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	  ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c

# Objects
OBJ = $(SRC:.c=.o)

# Compilacion del programa.

all: $(NAME)

$(NAME): ${OBJ}
	@$(LNK) $(NAME) $(OBJ)

OBJ: %.c
	@cc -c $(FLAGS) $< -o $@

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
