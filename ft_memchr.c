/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:36:50 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/02 21:30:31 by ohadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int set, size_t n)
{
	unsigned char	*mem_ref;
	unsigned char	set_ref;

	mem_ref = (unsigned char *)mem;
	set_ref = (unsigned char)set;
	if (n == 0)
		return (NULL);
	while (*mem_ref != set_ref && (n - 1))
	{
		mem_ref++;
		n--;
	}
	if (*mem_ref == set_ref)
		return (mem_ref);
	return (NULL);
}
