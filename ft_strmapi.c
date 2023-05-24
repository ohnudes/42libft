#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	str_len;

	if (!s || !f)
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	result = malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (NULL);
	while (i < str_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
