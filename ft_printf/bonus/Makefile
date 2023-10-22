# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 19:05:10 by nmaturan          #+#    #+#              #
#    Updated: 2023/09/19 20:11:38 by nmaturan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bonus.a 

FLAGS = -Wall -Wextra -Werror

T_FLAGS = -Wall -Wextra -Werror -g

LNK = ar rcs

INC = ft_printf_bonus.h

SRC = ft_printf_bonus.c ft_printf_utils_bonus.c ft_printf_diuxp_bonus.c ft_printf_print_bonus.c \
	  ft_flags_utils_bonus.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo Creating library: $(NAME) ...
	@$(LNK) $@ $(OBJ)
	@echo Library completed

%.o: %.c $(INC)
	@echo Compiling $<
	@gcc -c $(FLAGS) $< -o $@
	@echo Compilation complete.

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
