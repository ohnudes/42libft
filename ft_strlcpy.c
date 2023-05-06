#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	counter;

	counter = 0;
	len_src = (size_t)ft_strlen(src);
	if (size > 0)
	{
		while (*src && counter < size - 1)
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	return(len_src);
}
