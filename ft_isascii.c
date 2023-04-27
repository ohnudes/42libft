
int	isascii(int c)
{
	if (c > 0 && c < 127)
		return(true);
	else
		return(0);
}
