typedef unsigned int t_size_t;

t_size_t ft_strlcat(char *dst, const char *src, t_size_t size)
{
	t_size_t	counter;

	counter = 0;
	if (dst[counter])
	{
		while (counter < size - 1)
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[size-1] = 0;
	}
	return(size - 1);
}

