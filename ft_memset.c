#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t counter;
	int *cast;

	cast = (int*)b;
	counter = 0;
	while(counter < len)
	{
		cast[counter] = (int)c; 
		counter++;
	}
	return(b);
}

int	main(void)
{
	char	*str = "hola";

	printf("str antes de memset: %s\npostft: %p\n", str, ft_memset(str, '1', 5));
	return(0);
}
