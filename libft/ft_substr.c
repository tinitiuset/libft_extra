/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:46:23 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/04 22:34:21 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ns = malloc(1);
		if (!ns)
			return (NULL);
		*ns = '\0';
		return (ns);
	}
	if (ft_strlen(s) - start - 1 < len)
		len = ft_strlen(s) - start;
	ns = malloc((len + 1));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s + start, len + 1);
	ns[len] = '\0';
	return (ns);
}
