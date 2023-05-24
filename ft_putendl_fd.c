#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';

	ft_putstr_fd(s, fd);
	write (fd, &c, sizeof(char));
}
