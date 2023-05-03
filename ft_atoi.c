#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char c)
{
	int	i;

	i = 0;
	if (c >= '0' && c <= '9')
	{
		i = c;
		return(i);
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = c;
		return(i);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = c;
		return(i);
	}
	return(0);
}

int	main(int counter, char *arg[])
{
	int	i = atoi(arg[1]);

	printf("argument given: %s\n", arg[1]);
	printf("Argument in ascii: %d\n", ft_atoi(*arg[1]));
	printf("Argument in ascii: %d\n", i); 
	return(0);
}
