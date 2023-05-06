#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t counter;
	char	*ptr;

	counter = 0;
	ptr = (char*)s;
	while(counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}
