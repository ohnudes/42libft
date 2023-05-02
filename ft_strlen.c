typedef unsigned int	T_SIZE_T;

size_t ft_strlen(const char *s)
{
	size_t counter;

	counter = 0;
	while (s[counter])
		counter++;
	return(counter);
}
