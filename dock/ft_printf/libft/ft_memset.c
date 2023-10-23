/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:22:21 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/25 20:22:26 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*cast;
	size_t	i;

	cast = (char *)s;
	i = 0;
	while (i < len)
	{
		cast[i] = (char)c;
		i++;
	}
	return (s);
}
