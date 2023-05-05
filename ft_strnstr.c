char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (little[i] == 0)
		return(big);
	while (i < len)
		{
			while (little[i+j] == big[i+j])
			{
				if (little[i+j] == 00)
					return(little[i]);
				j++;
			}
			i++;
		}
	return(0);
}
