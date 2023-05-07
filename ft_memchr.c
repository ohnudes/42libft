/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:53:13 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 16:05:13 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *c_s;
	unsigned char c_c;

	c_s = (unsigned char *)s;
	c_c = (unsigned char)c; 
	while (*c_s != c_c && n > 0)
	{
		c_s++;
		n--;
	}
	if (*c_s == c_c)
		return(c_s);
	return(NULL);
}
