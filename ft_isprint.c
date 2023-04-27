/* ft_isprint returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isalnum argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	ft_isprint(int c)
{
	if (c > 32 && c < 126)
		return(true);
	else
		return(0);
}

/* To check:
 *		Return value for true.
 */
