#include "libft.h"
#include <stdio.h>

static void free_all(char	**big, size_t count_check)
{
	if (big)
	{
		if (count_check)
		{
			while (count_check <= 0)
			{
				free(big + count_check);
				count_check--;
			}
		}
		printf("Step 2: big created\n");
		free(big);
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
	printf("Step 1: how many substrings = %zu\n", count);
	return (count);
}
static size_t str_len(const char *s, const char c) 
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	printf("str_len = %zu\n", len);
	return (len);
}
/*
*/
void ft_split(const char *s, const char c) 
{
	char	**big;
	size_t	little;
	size_t	i;

	little = 0;
	printf("Step 0: pre malloc\n");
	big = (char **)malloc(sizeof(char **) * (str_count(s, c) + 1));
	free_all(big, little);
	printf("Step 3: post free\n");
	i = 0;
	while (little < str_count(s, c)) 
	{
		if (s[i] && s[i] != c)
		{
			big[little] = ft_substr(s, i, str_len((s + i), c) + 1); //free!
			//free_all(big, little);
			little++;
		}
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	free_all(big, little);
	/*
	return (big);
	*/
}

int	main(void)
{
	char *a = "1 22 333";
	const char c = ' ';
	
	ft_split(a, c);
	return (0);
}
