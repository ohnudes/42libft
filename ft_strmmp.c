#ifndef T_SIZE_T
typedef unsigned int T_SIZE_T;
#endif 

int	ft_strncmp(const char *s1, const char *s2, T_SIZE_T n)
{
	T_SIZE_T counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] != s2[counter])
			return(s1[counter] - s2[counter]);
		counter++;
	}
	return(s1[counter] - s2[counter]);
}

// <locale version> strlcoll
