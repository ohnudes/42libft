#include "libft.h"
#include <stdio.h>

char	*ft_split(const char *s, const char c)
{
	//char	**matrix;
	char	*ns;
	//size_t	t_str;
	size_t	ref;

	//t_str = 0;
	ns = (char *)s;
	if (*ns)
	{
		if (*ns != c && (ft_strchr(s, 0) || ft_strchr(s, c)))
		{
			ns = ft_strchr(s, c);
			//t_str++;
		}
	}
	return (ns);
}

int	main(void)
{
	char	*test;
	char	*a = "123 123";
	const char	c = ' ';

	test = malloc(ft_strlen(a));
	test = ft_split(a, c); 
	printf("test = %s\n", test);
	return (0);
}
