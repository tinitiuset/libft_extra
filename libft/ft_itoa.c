/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:53:00 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/10 12:42:28 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	i;

	i = 0;
	if (0 > n || !n)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	digits;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = ft_digits(n);
	s = malloc(digits + 1);
	if (!s)
		return (0);
	s[digits] = '\0';
	i = 0;
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
		i++;
	}
	while (digits-- > i)
	{
		s[digits] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
