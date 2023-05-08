/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:15:59 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:52:41 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;
	size_t	index;

	if (src != dst)
	{
		if (c_src < c_dst)
		{
			while (len--)
				*(c_dst + len) = *(c_src + len);
		}
		else if (c_src > c_dst)
		{
			while (index < len)
			{
				*c_dst = *c_src;
				c_dst++;
				c_src++;
				index++;
			}
		}
	}
	return (dst);
}
