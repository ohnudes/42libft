/* ft_isprint returns
 *		0: false
 *		non-zero: true
 *		
 *	ft_isalnum argument must be representable as an unsigned char or the value
 *	of EOF
 */

int	ft_isprint(int c)
{
	return(c >= 32 && c <= 126);
}
