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
