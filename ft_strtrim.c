/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:52:54 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/22 10:11:52 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	ri;
	char	*res;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	ri = ft_strlen(s1);
	while (i < ri && isset(set, s1[i]))
		i++;
	while (ri > i && isset(set, s1[ri - 1]))
		ri--;
	if (i == ri)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (ri - i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + i, ri - i + 1);
	return (res);
}
