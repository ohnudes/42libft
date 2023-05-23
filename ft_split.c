/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:59:50 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/23 13:34:05 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **big, size_t little)
{
	while (little)
	{
		little--;
		free(big[little]);
	}
	free(big);
	return (NULL);
}

static size_t	str_count(const char *s, const char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static size_t	str_len(const char *s, const char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, const char c)
{
	char	**big;
	size_t	little;
	size_t	i;

	big = malloc(sizeof(char **) * (str_count(s, c) + 1));
	if (!big)
		return (NULL);
	little = 0;
	i = 0;
	while (little < str_count(s, c))
	{
		if (s[i] && s[i] != c)
		{
			big[little] = ft_substr(s, i, str_len((s + i), c));
			if (!big[little])
				return (free_all(big, little));
			little++;
		}
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	big[little] = NULL;
	return (big);
}
/*
int	main(void)
{
	//char *a = "";
	//const char c = '\0';
	char *a = "      split       this for   me  !       ";
	const char c = ' ';
	size_t	i = 0;

	char **result = ft_split(a, c);
	if (!result)
		free(result);
	else
	{
		while (i <= str_count(a, c))
		{
			printf("substring %zu == %s\n", i, result[i]);
			i++;
		}
	}
	return (0);
}*/
