/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:14:22 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/08 14:54:23 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
	}
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
	}
	if (n < 0)
	i = 1;
	{
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			len;
	long int	nbr;

	nbr = (long int) n;
	len = ft_len(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (nbr == 0)
		ptr[0] = '0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		ptr[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (ptr);
}
