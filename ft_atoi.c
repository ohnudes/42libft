/* Ascii to Int */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char *cast;
	int	result;

	cast = (char*)nptr;
	result = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return(result);
}
