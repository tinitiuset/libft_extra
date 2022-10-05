/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:16:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/10 11:41:04 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void (*del)(void *))
{
	t_list	*nwlst;
	t_list	*tempnode;

	nwlst = NULL;
	while (lst)
	{
		tempnode = ft_lstnew(f(lst->content));
		if (!tempnode)
		{
			ft_lstclear(&tempnode, del);
			return (NULL);
		}
		ft_lstadd_back(&nwlst, tempnode);
		lst = lst->next;
	}
	return (nwlst);
}
