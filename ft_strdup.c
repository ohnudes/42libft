/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:39:32 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/10 10:18:17 by nmaturan         ###   ########.fr       */
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
