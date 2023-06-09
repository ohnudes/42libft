# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 14:32:57 by nmaturan          #+#    #+#              #
#    Updated: 2023/06/09 22:29:16 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Flags al compilar
FLAGS = -Wall -Wextra -Werror 

# Flags for linking
LNK = ar rc

# Include
INC = libft.h

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

SRC_BONUS = ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c	ft_lstclear_bonus.c ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c ft_lstnew_bonus.c ft_lstmap_bonus.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

#### Compilacion del programa ####

all: $(NAME)

$(NAME): $(OBJ) 
	$(LNK) $@ $^ 

%.o: %.c $(INC)
	gcc -c $(FLAGS) $< -o $@  

bonus: $(OBJ) $(OBJ_BONUS)
	$(LNK) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch bonus

fclean: clean
	@rm -f $(NAME) 

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJ_BONUS)
	@rm -f bonus

re: fclean all

.PHONY: all clean fclean re
