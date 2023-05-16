/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:37 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:35:39 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s, size_t n)
{
	char	*c_s;
	size_t	index;

	c_s = (char *)malloc(sizeof(char) * n);
	while (index++ && index <= n)
		c_s[index] = s[index];
	return (c_s);
}
