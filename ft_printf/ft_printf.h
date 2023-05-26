/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:24:48 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/19 17:18:59 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX "0123456789abcdef"
# define HEXUPPER "0123456789ABCDEF"
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *s, ...);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_putnbr(long long int n);

int	ft_putunbr(unsigned long long int n);

int	ft_hexa(unsigned long long n);

int	ft_hexaupper(unsigned long long n);

int	ft_ptr(unsigned long long n);

#endif