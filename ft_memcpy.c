/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:18:47 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:32:21 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t index;
	char *c_dst;

	index = 0;
	c_dst = (char*)dst;
	while (index < n)
	{
		c_dst[index] = *(char*)(src + index);
		index++;
	}
	return(c_dst);
}

/* To check:
 *	- what is src and dst overlap?
 */
