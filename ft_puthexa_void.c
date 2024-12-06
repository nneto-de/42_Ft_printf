/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_void.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:40:38 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/13 14:32:37 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_n(unsigned long n)
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

int	ft_puthexa_void(unsigned long n)
{
	const char	*map;
	int			i;
	int			len;
	char		*new;

	if (n == 0)
		return (write(1, "(nil)", 5));
	map = "0123456789abcdef";
	len = size_n(n);
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
	write(1, "0x", 2);
	len = ft_putstr(new) + 2;
	free(new);
	return (len);
}
