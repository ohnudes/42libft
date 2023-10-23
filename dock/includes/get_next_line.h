/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:30:45 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/23 14:44:30 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif 

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

/* main corpus */
char	*get_next_line(int fd);

/* utils */
char	*gnl_strchr(const char *str, char set);
char	*ft_strappend(char *first, char *second, int rbytes);
char	*ft_free(char *str);

#endif
