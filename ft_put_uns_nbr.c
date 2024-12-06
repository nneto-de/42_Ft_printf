/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:41:16 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/13 14:26:29 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_uns_nbr(unsigned int n)
{
	char	*str;
	int		len;
	int		x;

	x = (int) n;
	if (x < 0)
	{
		x = 4294967296 + x;
	}
	if (x == 0)
	{
		str = ft_itoa (n);
		len = ft_putstr(str);
		free(str);
		return (len);
	}
	str = ft_utoa(n);
	len = ft_putstr(str);
	free(str);
	return (len);
}
