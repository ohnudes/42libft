/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:01 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/26 15:02:43 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	index;
	char	*c_dst;

	index = 0;
	c_dst = (char *)dst;
	if (!src && !dst)
		return (NULL);
	while (index < n)
	{
		c_dst[index] = *(char *)(src + index);
		index++;
	}
	return (c_dst);
}
