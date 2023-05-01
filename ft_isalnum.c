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
		return(1);
	else if (c > 'A' && c < 'Z') 
		return(1);
	else if (c > 'A' && c < 'Z') 
		return(1);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
