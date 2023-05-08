#include <ctype.h>
#include <stdio.h>
#include "libft.h"

// CHARACTER CLASSIFICATION FUNCTIONS
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t strlen(const char *s);

//TBD
/*void bzero(void *s, size_t n);
void *memset(void *b, int c, size_t len);
void *memcpy(void dst, const void src, size_t n);
void *memmove(void *dst, const void *src, size_t len);
*/

int main(int argc, char *arg[]) 
{
	if (argc != 2)
		return(0);

	// CHARACTER CLASSIFICATION FUNCTIONS
	// CTYPE.h
	printf("Given argument: %c, result of ft_isalpha is: %d\n", *arg[1], ft_isalpha(*arg[1]));
	printf("Given argument: %c, result of isalpha is: %d\n", *arg[1], isalpha(*arg[1]));
	printf("Given argument: %c, result of ft_isdigit is: %d\n", *arg[1], ft_isdigit(*arg[1]));
	printf("Given argument: %c, result of isdigit is: %d\n", *arg[1], isdigit(*arg[1]));
	printf("Given argument: %c, result of ft_isalnum is: %d\n", *arg[1], ft_isalnum(*arg[1]));
	printf("Given argument: %c, result of isalnum is: %d\n", *arg[1], isalnum(*arg[1]));
	printf("Given argument: %c, result of ft_isascii is: %d\n", *arg[1], ft_isascii(*arg[1]));
	printf("Given argument: %c, result of isascii is: %d\n", *arg[1], isascii(*arg[1]));
	printf("Given argument: %c, result of ft_isprint is: %d\n", *arg[1], ft_isprint(*arg[1]));
	printf("Given argument: %c, result of isprint is: %d\n", *arg[1], isprint(*arg[1]));

	return(0);
}

// !cc main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
