#include "libft.h"

char	*sub_str(const char *s, char *s_dup, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max && *s) 
	{
		s_dup[i] = s[i];
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	size_t	str_c;
	size_t	s_len;
	size_t	i;
	char	*s_dup;

	s_dup = ft_strdup(s);
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		if (s_dup[i] == c)
			s_dup[i] = '\0';
		i++;
	}
	i = 0;
	while (s_dup[i] == '\0' && i < s_len)
		i++;
	if (s_dup[i])
		s_dup[i] = *ft_substr(s, i, ft_strlen(s_dup + i));
	
}

int	main(void)
{

}
