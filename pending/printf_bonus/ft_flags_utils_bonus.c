/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:42:27 by nmaturan          #+#    #+#             */
/*   Updated: 2023/09/19 19:52:07 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_flagvalidation(t_argformat *total, const char format)
{
	if (total->dot || total->dash)
		total->zero = 0;
	if (total->zero)
	{
		if (format == 'c' || format == 'p' || format == '%' || format == 's')
		{
			total->zero = 0;
			total->width = 0;
		}
	}
	if (total->dot)
	{
		if (format == 's')
			total->truncate = total->precission;
		else if (format == 'c' || format == 'p' || format == '%')
		{
			total->dot = 0;
			total->precission = 0;
		}
	}
}

void	ft_hashflag(t_argformat *total, char format)
{
	if (format == 'X')
		ft_prints(total, "0X");
	else if (format == 'x')
		ft_prints(total, "0x");
	total->hash = 0;
}

void	ft_sumflag(t_argformat *total)
{
	if (total->sum)
		ft_printc(total, '+');
	else if (total->space && !total->sum)
		ft_printc(total, ' ');
	total->sum = 0;
	total->space = 0;
}
