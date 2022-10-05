/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:12:31 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/04 16:41:48 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*news;

	news = malloc(ft_strlen(s) + 1);
	if (news == NULL)
		return (NULL);
	return ((char *) ft_memcpy(news, s, ft_strlen(s) + 1));
}
