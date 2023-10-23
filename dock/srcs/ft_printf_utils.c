/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:06:29 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/23 14:34:04 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putptr(t_lc *total, void *p)
{
	intptr_t	cp;

	cp = (intptr_t) p;
	if (!cp)
	{
		ft_putstr(total, "0x0");
		return ;
	}
	else
	{
		ft_putstr(total, "0x");
		ft_put_l_hex(total, cp);
	}
}

void	ft_putint(t_lc *total, int i)
{
	if (i == -2147483648)
	{
		ft_putstr(total, "-2147483648");
		return ;
	}
	if (i < 0 && total->len != -1)
	{
		ft_putchar(total, '-');
		ft_putint(total, -i);
	}
	else if (i / 10 && total->len != -1)
		ft_putuint(total, i);
	else if (total->len != -1)
		ft_putchar(total, (i % 10) + '0');
}

void	ft_putuint(t_lc *total, unsigned int u)
{
	if (u / 10)
		ft_putuint(total, u / 10);
	if (total->len != -1)
		ft_putchar(total, (u % 10) + '0');
}

void	ft_put_l_hex(t_lc *total, unsigned long int x)
{
	if (x / 16)
		ft_put_l_hex(total, x / 16);
	if (total->len != -1)
		ft_putchar(total, "0123456789abcdef"[x % 16]);
}

void	ft_put_u_hex(t_lc *total, unsigned long int X)
{
	if (X / 16)
		ft_put_u_hex(total, X / 16);
	if (total->len != -1)
		ft_putchar(total, "0123456789ABCDEF"[X % 16]);
}
