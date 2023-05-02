#include <ctype.h>
#include <stdio.h>

// CHARACTER CLASSIFICATION FUNCTIONS
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

//TBD
/*size_t strlen(const char *s);
void bzero(void *s, size_t n);
void *memset(void *b, int c, size_t len);
void *memcpy(void dst, const void src, size_t n);
void *memmove(void *dst, const void *src, size_t len);
*/

int main(int argc, char *arg[]) 
{
	// CHARACTER CLASSIFICATION FUNCTIONS
// CTYPE.h
 	printf("result of ft_isalpha with arg is %d\n", ft_isalpha(*arg[1]));
	printf("result of ft_isdigit is %d\n", ft_isdigit(*arg[1]));
//  printf("result of ft_isalnum is %d\n", ft_isalnum(*arg[1]));
//  printf("result of ft_isascii is %d\n", ft_isascii(*arg[1]));
//  printf("result of ft_isprint is %d\n", ft_isprint(*arg[1]));

  return(0);
}
