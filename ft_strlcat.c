/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:51:33 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/15 17:51:40 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:17:42 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/11 10:28:01 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	while (len_dst + i + 1 <= dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (len_src + len_dst);
}
/*int	main(int argc, char **argv)
{
	char	dst[10] = "012345678";

	if (argc != 2)
		return (0);
	printf("%zu\n", ft_strlcat(dst, argv[1], ft_strlen(dst)));
	printf("%s\n", dst);
	return (0);
}*/
