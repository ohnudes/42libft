/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:57:51 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:43:20 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*cast;
	size_t			index;

	cast = (unsigned char *)s;
	index = 0;
	while (index < len)
	{
		cast[index] = (unsigned char)c;
		index++;
	}
	return (s);
}

//casting into char, given that char pastes into each byte rather than 
//int doing it for 4.
