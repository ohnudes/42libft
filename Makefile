# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 14:32:57 by nmaturan          #+#    #+#              #
#    Updated: 2023/05/19 12:45:52 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Flags al compilar
FLAGS = -Wall -Wextra -Werror 

# Flags for linking
LNK = ar

# Functions
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	  ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c

# Objects
OBJ = $(SRC:.c=.o)

#### Compilacion del programa ####

all: $(NAME)

$(NAME): $(OBJ) 
	@$(LNK) rc $@ $^ 

$(OBJ): $(SRC)
	@cc -c $(FLAGS) $^  

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
