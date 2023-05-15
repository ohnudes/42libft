/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:18:04 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:21:30 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	holder;

	holder = (unsigned char)c;
	if (*str == '\0' || c == '\0')
		return (NULL);
	while (*str)
	{
		if (*str == holder)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
