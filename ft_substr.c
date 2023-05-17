/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:42 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/17 12:20:44 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (start == '\0')
		return (NULL);
	substr = malloc(sizeof(char) * len);
	while (*s != start)
		s++;
	if (*s == start)
	{
		while (*s++ && i <= len)
		{
			substr[i] = *s;
			i++;
		}
	}
	return (substr);
}
