#include "libft.h"
#include <stdio.h>

static size_t str_count(const char *s, const char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s[i] && s[i] != c)
		count++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
		{
			i++;
			if (s[i] && s[i] != c)
				count++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, const char c)
{
	char	**n_arr;
	size_t	i;
	size_t	ref;

	i = 0;
	n_arr = (char **)malloc(sizeof(char*) * (str_count(s, c) + 1));
	if (!n_arr)
		return (NULL);
	while (i < str_count(s, c))
		
}

int	main(void)
{
	char	*test;
	char	*a = "123 123 1";
	const char	c = ' ';

	test = ft_split(a, c); 
	printf("test = %s\n", test);
	return (0);
}
