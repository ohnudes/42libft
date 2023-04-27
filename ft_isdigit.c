/* ft_isdigit returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isdigit argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	isdigit(int c)
{
	if (c > '0' && c < '9')
		return(true);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
