/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:14:48 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/08 14:55:14 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == (char) c)
		{
			return ((char *)(a + i));
		}
		i++;
	}
	if (a[i] == (char) c)
	{
		return ((char *)(a + i));
	}	
	return (0);
}
