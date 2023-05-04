typedef unsigned int t_size_t;

char	*ft_strchr(const char *str, int c)
{	
	t_size_t counter;

	counter = 0;
	while (str[counter] != c)
		counter++;
	if (str[counter] == c)
		return(&str[counter]);
	return(0);
}
// check lsp error: "returning *char from const *char"
