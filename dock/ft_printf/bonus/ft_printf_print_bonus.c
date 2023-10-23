/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:06:57 by nmaturan          #+#    #+#             */
/*   Updated: 2023/09/19 20:10:31 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_printprefix(t_argformat *total)
{
	int		width;
	int		precission;
	char	set;

	set = '0';
	width = 0;
	precission = 0;
	if (total->precission)
		precission = total->precission - total->s_len;
	width = total->width - precission - total->s_len;
	if (!total->dash && !total->zero && total->width)
		set = ' ';
	while (width > 0 && total->count != -1)
	{
		ft_printc(total, set);
		width--;
	}
	while (precission > 0 && !total->truncate && total->count != -1)
	{
		set = '0';
		ft_printc(total, set);
		precission--;
	}
}

size_t	ft_printc(t_argformat *total, char n)
{
	int	wrbytes;

	if (total->count == -1)
		return (0);
	if (total->flags)
	{
		total->s_len += 1;
		return (0);
	}
	wrbytes = 0;
	wrbytes = write(1, &n, 1);
	if (wrbytes == -1)
	{
		total->count = -1;
		return (0);
	}
	else if (wrbytes == 1)
		total->count += 1;
	return (1);
}

void	ft_prints(t_argformat *total, char *s)
{
	size_t	i;

	if (!s || s == NULL)
	{
		ft_prints(total, "(null)");
		return ;
	}
	i = 0;
	if (total->truncate)
	{
		while (s[i] != '\0' && total->truncate && total->count != -1)
		{
			ft_printc(total, s[i]);
			i++;
			total->truncate--;
		}
	}
	else
	{
		while (s[i] != '\0' && total->count != -1)
		{
			ft_printc(total, s[i]);
			i++;
		}
	}
}

void	ft_printsuffix(t_argformat *total)
{
	while (total->rwidth - total->count > 0 && total->count != -1)
		ft_printc(total, ' ');
}
