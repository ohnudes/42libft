/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:07:28 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/23 14:33:54 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(t_lc *total, int c)
{
	int	rvalue;

	rvalue = 0;
	if (total->len != -1)
		rvalue = write(1, &c, 1);
	if (rvalue == -1)
	{
		total->len = -1;
		return ;
	}
	else
		total->len += 1;
}

void	ft_putstr(t_lc *total, char	*s)
{
	int	i;

	if (!s || s == NULL)
	{
		ft_putstr(total, "(null)");
		return ;
	}
	i = 0;
	while (s[i] != '\0' && total->len != -1)
	{
		ft_putchar(total, s[i]);
		i++;
	}
}

int	format_handler(t_lc *total, va_list args, const char format)
{
	if (format == 'c' && total->len != -1)
		ft_putchar(total, va_arg(args, int));
	else if (format == 's' && total->len != -1)
		ft_putstr(total, va_arg(args, char *));
	else if (format == 'p' && total->len != -1)
		ft_putptr(total, va_arg(args, void *));
	else if ((format == 'd' || format == 'i') && total->len != -1)
		ft_putint(total, va_arg(args, int));
	else if (format == 'u' && total->len != -1)
		ft_putuint(total, va_arg(args, unsigned int));
	else if (format == 'x' && total->len != -1)
		ft_put_l_hex(total, va_arg(args, unsigned int ));
	else if (format == 'X' && total->len != -1)
		ft_put_u_hex(total, va_arg(args, unsigned int));
	else if (format == '%' && total->len != -1)
		ft_putchar(total, '%');
	if (total->len == -1)
		return (-1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_lc	total;
	int		i;

	total = (t_lc){};
	va_start(args, str);
	i = 0;
	while (str[i] != '\0' && total.len != -1)
	{
		while (str[i] && str[i] != '%' && total.len != -1)
			ft_putchar(&total, str[i++]);
		if (str[i] == '%' && str[i] && total.len != -1)
		{
			if (format_handler(&total, args, str[++i]) != -1)
				i++;
		}
	}
	va_end(args);
	if (total.len == -1)
		return (-1);
	return (total.len);
}
