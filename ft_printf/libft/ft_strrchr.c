/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:44 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/21 21:47:00 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*ptr;
	int				ri;

	ri = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + ri));
	if (!*str)
		return (NULL);
	while (ri >= 0)
	{
		if (str[ri] == (unsigned char) c)
		{
			ptr = (unsigned char *)(str + ri);
			return ((char *)ptr);
		}
		ri--;
	}
	return (NULL);
}
