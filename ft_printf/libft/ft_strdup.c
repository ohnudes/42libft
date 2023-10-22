/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:37 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/21 15:43:40 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;

	s_len = ft_strlen(s) + 1;
	s_cpy = malloc(sizeof(char) * s_len);
	if (!s_cpy)
		return (NULL);
	ft_strlcpy(s_cpy, s, s_len);
	return (s_cpy);
}
