/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:34:56 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:34:58 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	
	if (!*little)
		return ((char *)big);
	if (len < ft_strlen(little))
		return (NULL);
	while (big[i + 1])
	{
		while (little[i + j] == big[i + j] && j < len + 1)
		{
			j++;
			if (!little[i + j])
				return ((char *)little);
		}
		i++;
	}
	return (NULL);
}
