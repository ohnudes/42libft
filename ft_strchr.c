/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:37:06 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:37:08 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	holder;

	holder = (char)c;
	while (*str)
	{
		if (*str == holder)
			return ((char *)str);
		str++;
	}
	if (*str == holder)
		return ((char *)str);
	return (NULL);
}
