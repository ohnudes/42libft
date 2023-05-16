/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:29 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:35:31 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size > sizeof(int))
		return (NULL);
	return (malloc(sizeof(size) * nmemb));
}
