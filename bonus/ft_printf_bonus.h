/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:14:22 by nmaturan          #+#    #+#             */
/*   Updated: 2023/09/19 19:51:58 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_argformat {
	char	*spec;
	int		count;
	int		flags;
	int		s_len;
	int		sum;
	int		space;
	int		dash;
	int		zero;
	int		width;
	int		rwidth;
	int		dot;
	int		precission;
	int		truncate;
	int		hash;
}	t_argformat;

int		ft_printf(const char *str, ...);

// checking for flags
char	*check_valid_format(t_argformat *total, va_list args, const char *str);
int		flag_parser(t_argformat *total, char *start);

// specifier into arg
int		format_handler(t_argformat *total, va_list args, const char format);

// print utils
size_t	ft_printc(t_argformat *total, char n);
void	ft_prints(t_argformat *total, char *s);
void	ft_printprefix(t_argformat *total);
void	ft_printsuffix(t_argformat *total);

// print format
void	ft_printp(t_argformat *total, void *ptr);
void	ft_printdi(t_argformat *total, int i);
void	ft_printu(t_argformat *total, unsigned int u);
void	ft_printx(t_argformat *total, char type, unsigned int x);
void	ft_printx_lc(t_argformat *total, unsigned long int x);
void	ft_printx_uc(t_argformat *total, unsigned long int X);

// utils
char	*ft_strchr(const char *str, char set);
int		ft_isnum(char n);
int		ft_param_len(int *paramenter, char *str);
int		ft_width_adjust(int *type, int *s_len, int size, char *str);
int		simple_flag(t_argformat *total, char *str);

// flag utils
void	ft_flagvalidation(t_argformat *total, const char format);
void	ft_sumflag(t_argformat *total);
void	ft_hashflag(t_argformat *total, char type);
void	ft_widthflag(t_argformat *total, int *width);

#endif
