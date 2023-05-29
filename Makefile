# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 14:32:57 by nmaturan          #+#    #+#              #
#    Updated: 2023/05/25 21:46:08 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Flags al compilar
FLAGS = -Wall -Wextra -Werror 

# Flags for linking
LNK = ar rc

# Dependencies
DEPS = libft.h

# Functions
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	  ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \

# Objects
OBJ = $(SRC:.c=.o)

# Bonus
SRC_BONUS = ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstnew.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

#### Compilacion del programa ####

all: $(NAME)

$(NAME): $(OBJ) 
	@$(LNK) $@ $^ 

%.o: %.c $(DEPS)
	@gcc -c $(FLAGS) $< -o $@  

bonus: $(NAME) $(OBJ_BONUS)
	@$(LNK) $(NAME) $(OBJ_BONUS)

$(OBJ_BONUS): $(SRC_BONUS) $(DEPS) 
	@cc $(FLAGS) -c $< -o $@

fclean: clean
	@rm -f $(NAME) 
	@rm -f $(OBJ_BONUS)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re bonus
