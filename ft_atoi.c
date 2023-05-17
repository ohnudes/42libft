/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:46:53 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/17 15:47:00 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
