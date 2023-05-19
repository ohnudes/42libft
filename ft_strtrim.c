#include "libft.h"
#include <stdio.h>

int	ft_isset(const char *set, char c)
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

	i = 0;
	ri = ft_strlen(s1) - 1;
	printf("check 0:\n i = %zu\nri = %zu\n", i, ri);

	while (s1[i] && i < ri && (ft_isset(set, s1[i]) == 1))
		i++;
	printf("check 1: i = %zu\n", i);

	while (ft_isset(set, s1[ri]) == 1)
		ri--;
	printf("check 2: ri = %zu\n", ri);

	if (s1[i] == s1[ri])
		return (ft_strdup(""));
	printf("check 3 valid string\n");

	res = malloc(sizeof(char) * (ri - i + 1));
	if (!res)
		return (NULL);
	printf("check 4: res created\n");

	res = ft_substr(s1, i, (ri - i + 1));
	printf("check 5: res = %s\n", res);
	return (res);
}

int	main(void)
{
	char	*res;

	res = ft_strtrim("21111ho1la1112", "12");
	printf("result = %s\n", res);
	free (res);
	return (0);
}
