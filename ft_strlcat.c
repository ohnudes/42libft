/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:50:54 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/17 10:51:34 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	while (len_dst + i + 1 <= dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (len_src + len_dst);
}
