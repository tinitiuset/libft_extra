/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:08:06 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/03 21:05:28 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	match;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		match = 0;
		while (*(needle + match)
			&& needle[match] == haystack[i + match]
			&& i + match < len)
			match++;
		if (!needle[match])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
