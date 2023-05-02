#include <ctype.h>
#include <stdio.h>

// CHARACTER CLASSIFICATION FUNCTIONS
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int main(int argc, char *arg[]) 
{
	// CHARACTER CLASSIFICATION FUNCTIONS

	printf("result of ft_isalpha is, with hardcoded argument is %d\n", ft_isalpha('a'));
	printf("result of isalpha is, with hardcoded argument is %d\n", isalpha('a'));
	printf("result of ft_isalpha with arg is %d\n", ft_isalpha(*arg[1]));
	printf("result of isalpha with arg is  %d\n", isalpha(*arg[1]));
// To be fixed for ALL is* functions.

//	printf("result of ft_isdigit is %d\n", ft_isdigit(*arg[1]));
//  printf("result of ft_isalnu is %d\n", ft_isalnum(*arg[1]));
//  printf("result of ft_isascii is %d\n", ft_isascii(*arg[1]));
//  printf("result of ft_isprint is %d\n", ft_isprint(*arg[1]));

  return(0);
}
