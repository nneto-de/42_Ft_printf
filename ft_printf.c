/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:00:10 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/11 18:39:44 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char	*str, int i, va_list args)
{
	if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str[i + 1] == '%')
		return (ft_put());
	else if (str[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str[i + 1] == 'i' || str[i + 1] == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (str[i + 1] == 'u')
		return (ft_put_uns_nbr(va_arg(args, int)));
	else if (str[i + 1] == 'p')
		return (ft_puthexa_void(va_arg(args, unsigned long)));
	else if (str[i +1] == 'x')
		return (ft_puthexa_lower(va_arg(args, unsigned int)));
	else if (str[i +1] == 'X')
		return (ft_puthexa_upper(va_arg(args, unsigned int)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%%", str[i + 1]))
		{
			j += ft_printf_arg(str, i, args);
			i++;
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (j);
}
