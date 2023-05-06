#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t counter;

	counter = size - ft_strlen(dst) - 1;
	while (*dst	!= '\0')
		dst++;
	if (size - ft_strlen(dst) - 1 > 0) 
	{
		while (*src && counter > 0) 
		{
			*dst = *(char*)src;
			counter--;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}

// how to check for the freakin free byte? -> maybe 
// adressed by size given the buffer size. Then how to check there's still
// space after finishing the string other than \00?
