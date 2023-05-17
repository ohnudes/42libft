/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:32:43 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/16 14:33:30 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		result;
	int		nat_def;

	result = 0;
	nat_def = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			nat_def = 1; 
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	if (nat_def == 1)
		result = -result;
	return (result);
}

int	main(void)
{
	char	*str = "  2147483649";
	printf("ft_atoi result = %d\n", ft_atoi(str));
	printf("atoi result = %d\n", atoi(str));
	return (0);
}
