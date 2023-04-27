/* ft_isalnum returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isalnum argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	isalnum(int c)
{
	if (c > '0' && c < '9')
		return(true);
	else if (c > 'A' && c < 'Z') 
		return(true);
	else if (c > 'A' && c < 'Z') 
		return(true);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
