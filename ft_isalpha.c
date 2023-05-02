
int	ft_isalpha(int c)
{
	return((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/* ft_isalpha returns 
 * 0: false
 * non-zero: true
 * ft_isalpha argument must be representable as an unsigned char or the value
 * of EOF
 */
