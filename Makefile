NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
LIBF = ar rc

OBJECTS = ft_isalpha.o ft_isalnum.o ft_isdigit.o ft_isprint.o ft_isascii.o \
		  ft_toupper.o ft_tolower.o ft_atoi.o ft_strncmp.o ft_strnstr.o \
		  ft_strchr.o ft_strrchr.o ft_strlen.o ft_strlcpy.o ft_strlcat.o \
		  ft_bzero.o ft_memset.o ft_memcpy.o ft_memmove.o ft_memchr.o \
		  ft_memcmp.o

%.o: %.c
		@cc -c ${CFLAGS} $< -o $@

${NAME}:: ${OBJECTS}
	@${LIBFT} ${NAME} ${OBJECTS}
	@ranlib ${NAME}

ALL: ${NAME}

FCLEAN: CLEAN
	@echo "$HEADER"
	@rm -f ${NAME}

CLEAN:
	@rm -f ${OBJECTS}

RE: FCLEAN ALL
	.PHONY: CLEAN ALL FCLEAN RE
