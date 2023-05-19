#include "libft.h"
#include <stdio.h>

int	ft_isset(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
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

	i = 0;
	ri = ft_strlen(s1);
	while (s1[i] && s1[i] < s1[ri] && !(ft_isset(set, s1[i])))
		i++;
	printf("check 1: i = %zu\n", i);
	while (s1[ri] && s1[ri] > s1[i] && !(ft_isset(set, s1[ri])))
		ri--;
	if (s1[i] == s1[ri])
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (ri - i + 1));
	if (!res)
		return (NULL);
	
}
