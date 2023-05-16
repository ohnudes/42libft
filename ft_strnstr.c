/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:34:56 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 22:06:49 by nmaturan         ###   ########.fr       */
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
	while (big[i] && len - i >= ft_strlen(little))
	{
		if (big[i + j] == little[j])
		{
			while (big[i + j] == little[j] && big[i + j] && little[j])
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
