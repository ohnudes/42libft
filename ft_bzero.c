/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:14:58 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 15:15:00 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t counter;
	char	*ptr;

	counter = 0;
	ptr = (char*)s;
	while(counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}
