/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:08:49 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/23 18:47:23 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		n_cpy;
	int		digits;
	int		i;
	char	*res;

	digits = 1;
	if (!n)
		return (NULL);
	else
	{
		n_cpy = n;
		while (n_cpy/10 >= 1)
		{
			n_cpy = n_cpy / 10;
			digits++;
		}
		printf("digits value = %d\n", digits);
		res = malloc(sizeof(char *) * digits + 1);
		if (!res)
			return (NULL);
		i = 0;
		while (digits)
		{
			res[i] = (n / (n_cpy * digits) + '0';
			digits--;
		}
		res[i] = '\0';
	}
	return (res);
}

int	main(void)
{
	char	*res;

	res = ft_itoa(10);
	printf("ft_itoa == %s\n", res);
	free(res);
	return (0);
}
