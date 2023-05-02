void ft_bzero(void *s, size_t n)
{
	size_t counter;

	counter = 0;
	while(counter < n)
	{
		*(b + counter) = 0;
		counter++;
	}
	return(0);
}

/* To fix:
 *	- size_t typedef
 *	- risk of deleting adress that defines array?
 * /
