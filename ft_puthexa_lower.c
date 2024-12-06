/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:24:18 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/13 14:31:31 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	size_n(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_puthexa_lower(unsigned int n)
{
	const char	*map;
	int			i;
	int			len;
	char		*new;

	map = "0123456789abcdef";
	len = size_n(n);
	if (len == 0)
		len = 1;
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (0);
	i = len - 1;
	while (i >= 0)
	{
		new[i] = map[n % 16];
		i--;
		n = n / 16;
	}
	new[len] = '\0';
	len = ft_putstr(new);
	free(new);
	return (len);
}
