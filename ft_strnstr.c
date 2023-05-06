#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*little)
		return((char*)big);
	while (*(big + i) && len > 1)
		{
			while (little[i+j] == big[i+j] && j < len + 1)
			{
				j++;
				if (!little[i+j])
					return((char*)little);
			}
			i++;
		}
	return(NULL);
}
