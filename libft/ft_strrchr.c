/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:31:00 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/03 21:05:53 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	c = (unsigned char) c;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	found = NULL;
	while (ft_strchr(s, c) != NULL )
	{
		found = ft_strchr(s, c);
		s = found + 1;
	}
	return ((char *) found);
}
