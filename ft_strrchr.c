/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:44 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/21 14:28:18 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*ptr;
	int				len_str;

	len_str = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + len_str));
	if (!*str)
		return (NULL);
	while (len_str >= 0)
	{
		if (str[len_str] == (unsigned char) c)
		{
			ptr = (unsigned char *)(str + len_str);
			return ((char *)ptr);
		}
		len_str--;
	}
	return (NULL);
}
