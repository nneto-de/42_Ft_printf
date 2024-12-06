/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:49:13 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/13 15:04:34 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_switch(char *str)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	new = (char *)malloc((sizeof(char)) * (i + 1));
	if (new == NULL)
		return (NULL);
	i = i - 1;
	while (i >= 0)
	{
		new[j] = str[i];
		i--;
		j++;
	}
	new[j] = '\0';
	return (new);
}

char	*ft_utoa(long long int n)
{
	char				*temp;
	int					i;
	long long int		nbr;
	char				*new;

	nbr = n;
	i = 0;
	while (nbr > 0 && ++i)
	{
		nbr = nbr / 10;
	}
	temp = (char *)malloc((sizeof(char)) * (i + 1));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		temp[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}
	temp[i] = '\0';
	new = ft_switch(temp);
	free(temp);
	return (new);
}
