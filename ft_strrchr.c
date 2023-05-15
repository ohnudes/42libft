/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:18:20 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/15 22:36:13 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{	
	unsigned char	*ptr;

	ptr = '\0';
	if (*str == (unsigned char) c)
		ptr = (unsigned char *) str;
	while (*str)
	{
		str++;
		if (*str == c)
			ptr = (unsigned char *) str;
	}
	if (*ptr)
		return ((char*) ptr);
	return (NULL);
}

