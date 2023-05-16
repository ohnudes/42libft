/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:32:37 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:33:26 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)s;
	while (counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}
