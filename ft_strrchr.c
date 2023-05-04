typedef unsigned int t_size_t;

char	*ft_strrchr(const char *str, int c)
{	
	t_size_t counter;
	char	*ptr;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == c)
			ptr = &(str + counter);
		counter++;
	}
	if (str[counter] == c)
		return(ptr);
	return(0);
}
// confirm pointer buffer.
