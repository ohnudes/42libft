/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:34:56 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 22:03:09 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && len - i >= ft_strlen(little))
	{
		if (big[i + j] == little[j])
		{
			while (big[i + j] == little[j])
			{
				if (little[j] == 0)
					return ((char *)big + i);
				j++;
			}
			if (little[j] == 0)
				return ((char *)big + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
   char	*ft_strnstr(const char *big, const char *little, size_t len)
   {
   size_t	i;
   size_t	j;

   i = 0;
   j = 0;
   if (!*little)
   return ((char *)big);
   if (len < ft_strlen(little))
   return (NULL);
   while (big[i])
   {
   printf("i = %zu\n", i);
   if (big[i + j] == little[j])
   {
   while (big[i + j] == little[j] && j < ft_strlen(little))
   {
   printf("j = %zu\n", j);
   if (little[j] == 0)
   return ((char *)big + i);
   j++;
   }
   if (little[j] == 0)
   return ((char *)big + i);
   j = 0;
   }
   i++;
   }
   return (NULL);
   }

   int	main(void)
   {
   const char	*big = "12312345678";
   const char	*little = "2";
   printf("result: %s\n", ft_strnstr(big, little, 20));
   return (0);
   }*/
