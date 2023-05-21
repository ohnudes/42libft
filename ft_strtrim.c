/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:52:54 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/21 17:20:14 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static	int	isset(const char *set, char c)
{

	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	ri;
	char	*res;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	ri = ft_strlen(s1);
	while (i < ri && isset(set, s1[i]))
		i++;
	while (ri > i && isset(set, s1[ri - 1]))
		ri--;
	if (i == ri)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (ri - i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res,s1 + i, ri - i + 1);
	return (res);
}

/*
   char	*ft_strtrim(const char *s1, const char *set)
   {
   size_t	i;
   size_t	ri;
   char	*res;

   i = 0;
   ri = ft_strlen(s1) - 1;
   printf("check 0:\n i = %zu\nri = %zu\n", i, ri);

   while (s1[i] && i < ri && (isset(set, s1[i])))
   i++;
   printf("check 1: i = %zu\n", i);

   while (isset(set, s1[ri]))
   ri--;
   printf("check 2: ri = %zu\n s1[ri] = %s\n", ri, s1 + ri);

   if (i == ri)
   return (ft_strdup(""));
   printf("check 3 valid string\n");

   res = malloc(sizeof(char) * (ri - i + 1));
   if (!res)
   return (NULL);
   printf("check 4: res created with maxlen = %zu\n", ri-i+1);

   res = ft_substr(s1, i, ri - i + 1);
   printf("check 5: res = %s\n", res);
   return (res);
   }

   int	main(void)
   {
   char	*res;

   res = ft_strtrim("x zxz xz 21111ho1la1112 xxzxz z x", "z x");
   printf("result = %s\nres_len = %zu\n", res, ft_strlen(res));
   free (res);
   return (0);
   }*/
