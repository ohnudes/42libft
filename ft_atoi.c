#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	index;
	char *cast;
	int	result;

	cast = (char*)nptr;
	index = 0;
	result = 0;
	while (ft_isdigit(cast[index]))
	{
		result = result * 10 + (cast[index] - 48);
		index++;
	}
	return(result);
}

