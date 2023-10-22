/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:50 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:36:52 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_s;
	unsigned char	c_c;

	c_s = (unsigned char *)s;
	c_c = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (*c_s != c_c && (n - 1))
	{
		c_s++;
		n--;
	}
	if (*c_s == c_c)
		return (c_s);
	return (NULL);
}
