/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:01 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/02 21:31:16 by ohadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	index;
	char	*c_dst;

	if (!src && !dst)
		return (NULL);
	index = 0;
	c_dst = (char *)dst;
	while (index < n)
	{
		c_dst[index] = *(char *)(src + index);
		index++;
	}
	return (c_dst);
}
