/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:49:13 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/29 14:44:20 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// clearing of a single lst
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*fwd;

	while (*lst)
	{
		fwd = (*lst)->next;
		ft_lstdelone(*lst, del);
		if (fwd)
			*lst = fwd;
	}
	*lst = NULL;
}
