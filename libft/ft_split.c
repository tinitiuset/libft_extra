/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:24:56 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/10 12:36:07 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_times(char const *s, char c)
{
	size_t	times;
	int		jump;

	times = 0;
	jump = 0;
	while (*s)
	{
		if (*s != c && jump == 0)
		{
			jump = 1;
			times++;
		}
		else if (jump == 1 && *s == c)
			jump = 0;
		s++;
	}
	return (times);
}

static size_t	ft_chars_until_c(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_alloc_copy_word(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	i = 0;
	while (len--)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	split_size;
	size_t	chars_until_c;
	size_t	i;

	if (!s)
		return (0);
	split_size = ft_split_times(s, c);
	split = malloc(sizeof(char *) * (split_size + 1));
	if (!split)
		return (0);
	i = 0;
	while (i < split_size)
	{
		chars_until_c = ft_chars_until_c(s, c);
		if (chars_until_c)
		{
			split[i] = ft_alloc_copy_word(s, chars_until_c);
			i++;
		}
		s = s + chars_until_c + 1;
	}
	split[i] = 0;
	return (split);
}
