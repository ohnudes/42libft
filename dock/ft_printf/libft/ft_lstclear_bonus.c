/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:49:13 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/30 17:58:04 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*fwd;

	while (*lst)
	{
		fwd = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = fwd;
	}
	*lst = NULL;
}
