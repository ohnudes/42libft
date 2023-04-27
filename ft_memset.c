void *ft_memset(void *b, int c, size_t len)
{
	size_t counter;

	counter = 0;
	while(counter < len)
	{
		*(b + counter) = c; 
		counter++;
	}
	return(0);
}

/* To check:
 * TYPEDEF syze_t
 */
