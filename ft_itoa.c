
#include "libft.h"
#include <stdio.h>

int	digit_count(int n)
{
	int	n_cpy;
	int	digits;

	digits = 1;
	n_cpy = n;
	while (n_cpy / 10)
	{
		n_cpy = n_cpy / 10;
		digits++;
	}
	return (digits);
}

char	expo_dec(int digits, int n)
{
	int		dec;
	int		d_cpy;
	char	result;

	d_cpy = digits;
	dec = 1;
	while (d_cpy - 1)
	{
		dec = dec * 10;
		d_cpy--;
		printf("dec total = %d\n", dec);
	}
	if (dec == 0)
		dec++;
	result = n / dec + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		i;
	char	*res;
	int		n_cpy;

	if (!n)
		return (NULL);
	n_cpy = n;
	digits = digit_count(n);
	printf("digits value = %d\n", digits);
	if (n < 0)
		i = 1;
	res = malloc(sizeof(char *) * (digits + 1 + i));
	if (!res)
		return (NULL);
	printf("post malloc test\n");
	i = 0;
	/*`
	if (n < 0)
	{
		res[i] = '-';
		i++;
	}*/
	while (i < digits)
	{
		res[i] = expo_dec(digits - i, n);
		printf("res[i] == %c\n", res[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char	*res;

	res = ft_itoa(10);
	printf("ft_itoa == %s\n", res);
	free(res);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	digits;
	int	i;

	i = 2;
	digits = 10;
	printf("start: i = %d, digits = %d\n", i, digits);
	while (digits--)
	{
		printf("iteration: i = %d, digits = %d\n", i, digits);
		//digits--;
		//i++;
	}
	printf("end i = %d, digits = %d\n", i, digits);
	return (0);
}*/
