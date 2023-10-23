/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:32:48 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/02 21:34:59 by ohadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;

	c_src = (char *)src;
	c_dst = (char *)dst;
	if (src == dst)
		return (dst);
	if (c_src < c_dst)
		while (len--)
			*(c_dst + len) = *(c_src + len);
	else if (c_src > c_dst)
	{
		while (len--)
			*c_dst++ = *c_src++;
	}
	return (dst);
}
