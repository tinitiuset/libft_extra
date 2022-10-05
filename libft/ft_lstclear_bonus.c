/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:19:15 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/09 18:37:50 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*about_to_del;

	while (*lst)
	{
		about_to_del = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(about_to_del, del);
	}
}
