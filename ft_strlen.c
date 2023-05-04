typedef unsigned int	T_SIZE_T;

T_SIZE_T ft_strlen(const char *s)
{
	T_SIZE_T counter;

	counter = 0;
	while (s[counter])
		counter++;
	return(counter);
}
