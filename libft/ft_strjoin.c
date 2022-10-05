/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:23:33 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/05 17:23:23 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ns;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1)
		return (NULL);
	ns = malloc(len);
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1, len);
	ft_strlcat(ns, s2, len);
	return (ns);
}
