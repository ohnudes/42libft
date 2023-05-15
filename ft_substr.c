/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:44:32 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/10 17:17:48 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*substr;

	if (start == '\0')
		return (NULL);
	substr = malloc(sizeof(char) * len);
	while (*s != start)
		s++;
	// casting s as unsigned int?
	if (*s == start)
	{
		while (*s++ && index <= len)
		{
			substr[index] = *s;
			index++;
		}
	}
	return (substr);
}
