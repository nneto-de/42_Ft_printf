/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:11:31 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/13 14:56:13 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>
# include<stddef.h>
# include<string.h>
# include<ctype.h>
# include<stdlib.h>

int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_puthexa_lower(unsigned int n);
int		ft_puthexa_upper(unsigned int n);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
char	*ft_strchr(const char *s, int c);
int		ft_puthexa_void(unsigned long n);
int		ft_put_uns_nbr(unsigned int n);
char	*ft_utoa(long long int n);
int		ft_put(void);

#endif