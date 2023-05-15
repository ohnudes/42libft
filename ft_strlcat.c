/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:17:42 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/11 10:28:01 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size < len_src)
		return (size + len_src);
	while (*dst != '\0')
		dst++;
	if (*dst == 0)
	{
		while (src[counter] && counter < size - len_dst - 1)
		{
			dst = (char *)src;
			counter++;
		}
		dst[counter] = '\0';
	}
	return (len_src + len_dst);
}
	// how to check for the freakin free byte? -> maybe 
	// adressed by size given the buffer size. Then how to check there's still
	// space after finishing the string other than \00?
