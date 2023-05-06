#include "libft.h"

char	*ft_strchr(const char *str, int c)
{	
	while (*str)
	{
		if (*str == c)
			return((char*)str);
		str++;
	}
	return(NULL);
}
