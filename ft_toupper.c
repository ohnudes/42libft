/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:19:14 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/07 17:10:20 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 22;
	return (c);
}

// check what does <current local> means: for this file and for _l versions.
//
