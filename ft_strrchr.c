#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{	
	char	*ptr;

	while (*str)
	{
		if (*str == c)
			ptr = (char*)&(str);
		str++;
	}
	if (*ptr)
		return(ptr);
	return(NULL);
}
