/* ft_isalpha returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isalpha argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c);
	else if (c >= 'A' && c <= 'Z') 
		return(c);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
