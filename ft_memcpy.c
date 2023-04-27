void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n)
	{
		dst[counter] = src[counter];
		counter++;
	}
	return(&dst);
}

/* To check:
 *	- what is src and dst overlap?
 */
