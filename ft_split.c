#include "libft.h"
#include <stdio.h>

static void free_all(char	**big, size_t count_check)
{
	if (big)
	{
		if (!big[count_check])
		{
			while (count_check <= 0)
			{
				free(big + count_check);
				count_check--;
			}
			free(big);
		}
	}
	if (!big)
		free(big);
}

static size_t str_count(const char *s, const char c)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (s[i]) 
	{
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c) 
			i++;
	}
	return (count);
}

static size_t str_len(const char *s, const char c) 
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char **ft_split(const char *s, const char c) 
{
	char	**big;
	size_t	little;
	size_t	i;

	little = 0;
	big = (char **)malloc(sizeof(char *) * (str_count(s, c) + 1));
	free_all(big, little);
	i = 0;
	while (little < str_count(s, c)) 
	{
		if (s[i] && s[i] != c)
		{
			big[little] = ft_substr(s, i, str_len((s + i), c) + 1); //free!
			free_all (big, little);
			little++;
		}
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (big);
}

int	main(void)
{
	char *test;
	char *a = "123 123 1";
	const char c = ' ';
	
	test = ft_split(a, c);
	printf("test = %s\n", test);
	return (0);
}
