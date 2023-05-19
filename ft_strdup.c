/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:37 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:35:39 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	s_cpy = malloc(sizeof(char) * s_len + 1);
	if (!s_cpy)
		return (NULL);
	i = 0;
	while (i <= s_len)
	{
		s_cpy[i] = s[i];
		i++;
	}
	return (s_cpy);
}
