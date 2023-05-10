/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:15:59 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/10 13:37:25 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;

	c_src = (char *)src;
	c_dst = dst;
	if (src != dst)
	{
		if (c_src < c_dst)
			while (len--)
				*(c_dst + len) = *(c_src + len);
		else if (c_src > c_dst)
		{
			while (len--)
				*c_dst++ = *c_src++;
		}
	}
	return (dst);
}
