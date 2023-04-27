/* ft_isalpha returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isalpha argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	isalpha(int c)
{
	if (c > 'a' && c < 'z')
		return(true);
	else if (c > 'A' && c < 'Z') 
		return(true);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
