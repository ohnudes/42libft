/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:32:37 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/23 14:34:25 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *mem, size_t n)
{
	size_t	counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)mem;
	while (counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}
