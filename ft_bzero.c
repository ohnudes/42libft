#include <stdio.h>

typedef unsigned int T_SIZE_T;

void ft_bzero(void *s, T_SIZE_T n)
{
	T_SIZE_T counter;

	counter = 0;
	while(counter < n)
	{
		s[counter] = 0;
		counter++;
	}
}

int	main(int counter, char *str[])
{	
	void	*str;

	*str = (void)*(str[1])
	ft_bzero(*str[1], 4);
	printf("printing post ft_bzero: %s\n", str[1]);
	return(0);
}

// To fix: check -Wall -Werror: 
