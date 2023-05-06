#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] != s2[counter])
			return(s1[counter] - s2[counter]);
		counter++;
	}
	return(s1[counter - 1] - s2[counter - 1]);
}

// <locale version> strlcoll
