#ifndef T_SIZE_T
typedef unsigned int T_SIZE_T ;
#endif 

char	*strnstr(const char *big, const char *little, T_SIZE_T len)
{
	T_SIZE_T i;
	T_SIZE_T j;

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
