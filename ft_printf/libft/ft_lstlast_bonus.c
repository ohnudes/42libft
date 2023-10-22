/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:20:32 by nmaturan          #+#    #+#             */
/*   Updated: 2023/05/30 19:34:47 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
/*
t_list	*reverse(t_list *lst)
{
	t_list	*curr;
	t_list	*fwd;
	t_list	*prev;

	curr = lst;
	prev = NULL;
	while (lst)
	{
		// modificar referencia
		fwd = curr->next;
		curr->next = prev; 

		// moverse 
		prev = curr;
		curr = fwd;
	}	
	return (prev);
}*/
