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
	i = 0;
	if (!s_cpy)
		return (NULL);
	while (i <= s_len)
	{
		s_cpy[i] = s[i];
		i++;
	}
	return (s_cpy);
}
/*
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	s_cpy = malloc(sizeof(char) * s_len);
	i = 0;
	if (!s_cpy)
		return (NULL);
	while (i <= s_len)
	{
		s_cpy[i++] = s[i++];
		printf("cpy[%zu]=%c\n",i,s_cpy[i]);
		i++;
	}
	return (s_cpy);
}

int	main(void)
{
	char	*s = "123";
	char	*s_cpy;

	s_cpy = ft_strdup(s);
	printf("s = %s\ns_cpy = %s\n", s, s_cpy);
	free(s_cpy);
	return (0);
}*/
