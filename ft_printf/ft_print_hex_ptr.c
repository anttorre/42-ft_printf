/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:02:10 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/19 17:18:16 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long long n)
{
	int	result;

	result = 0;
	if (n > 15)
	{
		result += ft_hexa(n / 16);
		if (result == -1)
			return (-1);
	}
	result += ft_putchar(HEX[n % 16]);
	return (result);
}

int	ft_hexaupper(unsigned long long n)
{
	int	result;

	result = 0;
	if (n > 15)
	{
		result += ft_hexaupper(n / 16);
		if (result == -1)
			return (-1);
	}
	result += ft_putchar(HEXUPPER[n % 16]);
	return (result);
}

int	ft_ptr(unsigned long long n)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	if (result == -1)
		return (-1);
	result += ft_hexa(n);
	if (result == -1)
		return (-1);
	return (result);
}
