/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:16:35 by nmaturan          #+#    #+#             */
/*   Updated: 2023/09/19 19:52:41 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	simple_flag(t_argformat *total, char *str)
{
	int	j;

	j = 0;
	if (*str == '+')
		j = ft_width_adjust(&total->sum, &total->s_len, 1, NULL);
	else if (*str == ' ')
		j = ft_width_adjust(&total->space, &total->s_len, 1, NULL);
	else if (*str == '#')
		j = ft_width_adjust(&total->hash, &total->s_len, 2, NULL);
	return (j);
}

char	*check_valid_format(t_argformat *total, va_list args, const char *str)
{
	char	*ref;
	int		arg_len;
	size_t	i;

	i = 0;
	arg_len = 0;
	ref = NULL;
	if (*str)
		ref = (char *) str;
	if (ref)
	{
		while (ref[i] && !ft_strchr("cspdiuxX%", ref[i]))
			i++;
		if (ref[i] && ft_strchr("cspdiuxX%", ref[i]))
		{
			if (i != 0)
			{
				total->flags = 1;
				arg_len = format_handler(total, args, *(ref + i));
			}
			if (arg_len != -1)
				return (ref + i);
		}
	}
	return (NULL);
}

int	flag_parser(t_argformat *total, char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] && str + i < total->spec)
	{
		j = 0;
		if (str[i] == '+' || str[i] == ' ' || str[i] == '#')
			j = simple_flag(total, str + i);
		else if (str[i] == '-')
			j = ft_width_adjust(&total->dash, &total->rwidth, 0, str + i);
		else if (str[i] == '0' && ft_strchr("diuxX", *total->spec))
			j = ft_width_adjust(&total->zero, &total->width, 0, str + i);
		else if (str[i] == '.' && ft_strchr("sdiuxX", *total->spec))
			j = ft_width_adjust(&total->dot, &total->precission, 0, str + i);
		else if (ft_isnum(str[i]))
			j = ft_param_len(&total->width, str + i);
		if (j <= 8 && j > 0)
			i += j;
		else
			return (total->count = -1);
	}
	return (total->flags = 0);
}

int	format_handler(t_argformat *total, va_list args, const char format)
{
	if (!total->flags && total->count != -1 && total->s_len)
	{
		ft_flagvalidation(total, format);
		ft_printprefix(total);
	}
	if (format == 'c' && total->count != -1)
		ft_printc(total, va_arg(args, int));
	else if (format == 's' && total->count != -1)
		ft_prints(total, va_arg(args, char *));
	else if (format == 'p' && total->count != -1)
		ft_printp(total, va_arg(args, void *));
	else if ((format == 'd' || format == 'i') && total->count != -1)
		ft_printdi(total, va_arg(args, int));
	else if (format == 'u' && total->count != -1)
		ft_printu(total, va_arg(args, unsigned int));
	else if ((format == 'x' || format == 'X') && total->count != -1)
		ft_printx(total, format, va_arg(args, unsigned int));
	else if (format == '%' && total->count != -1)
		ft_printc(total, '%');
	if (!total->flags && total->count != -1)
		ft_printsuffix(total);
	if (total->count == -1)
		return (-1);
	return (total->count);
}

int	ft_printf(const char *str, ...)
{
	t_argformat	total;
	va_list		args;
	va_list		args_copy;
	size_t		i;

	total = (t_argformat){};
	va_start(args, str);
	va_copy(args_copy, args);
	i = 0;
	while (str[i] != '\0' && total.count != -1)
	{
		if (str[i] != '%')
			i += ft_printc(&total, str[i]);
		else
		{
			total.spec = check_valid_format(&total, args_copy, &str[i + 1]);
			if (total.spec != str + i + 1 && total.count != -1)
				flag_parser(&total, (char *)str + i + 1);
			if (total.spec && format_handler(&total, args, *total.spec) != -1)
				i += 1 + (total.spec - (str + i));
		}
	}
	va_end(args);
	va_end(args_copy);
	return (total.count);
}
