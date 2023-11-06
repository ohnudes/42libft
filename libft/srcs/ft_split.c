/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:59:50 by nmaturan          #+#    #+#             */
/*   Updated: 2023/11/06 13:07:20 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_split
{
	char	**vector;
	size_t	word_count;
	size_t	count;
}				t_split;

static char	**free_all(char **vector, size_t count)
{
	while (count)
	{
		count--;
		free(vector[count]);
	}
	free(vector);
	return (NULL);
}

static size_t	str_count(const char *str, const char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

static size_t	str_len(const char *str, const char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *str, const char c)
{
	t_split	data;
	size_t	i;

	data = (t_split){};
	data.word_count = str_count(str, c);
	data.vector = malloc(sizeof(char **) * (data.word_count + 1));
	if (!data.vector)
		return (NULL);
	i = 0;
	while (data.count < data.word_count)
	{
		if (str[i] && str[i] != c)
		{
			data.vector[data.count] = ft_substr(str, i, str_len((str + i), c));
			if (!data.vector[data.count])
				return (free_all(data.vector, data.count));
			data.count++;
		}
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
	}
	data.vector[data.count] = NULL;
	return (data.vector);
}
