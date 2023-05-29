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
	t_list	*node;

	node = *lst;
	while (node)
	{
		fwd = node->next;
		ft_lstdelone(node, del);
		free(node);
		if (fwd)
			node = fwd;
	}
	lst = NULL;
}

// clearing of lst of lsts?
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*fwd;
	t_list	*fwdlst;
	t_list	*node;

	while	(lst)
	{
		node = *lst;
		fwdlst = node->next;
		while (node)
		{
			fwd = node->next;
			ft_lstdelone(node, del);
			free(node);
			if (fwd)
				node = fwd;
		}
		lst = NULL;
		node = fwdlst;
	}
}
