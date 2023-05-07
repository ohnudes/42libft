/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:18:20 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:18:21 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{	
	char	*ptr;

	while (*str)
	{
		if (*str == c)
			ptr = (char*)&(str);
		str++;
	}
	if (*ptr)
		return(ptr);
	return(NULL);
}
