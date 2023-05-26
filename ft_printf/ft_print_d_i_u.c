/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:53:30 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/19 16:54:49 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long int n)
{
	int		result;
	char	c;

	result = 0;
	if (n < 0)
	{
		result += ft_putchar('-');
		if (result == -1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		result += ft_putnbr(n / 10);
		if (result == -1)
			return (-1);
	}
	c = n % 10 + '0';
	result += ft_putchar(c);
	if (result == -1)
		return (-1);
	return (result);
}

int	ft_putunbr(unsigned long long int n)
{
	int		result;
	char	c;

	result = 0;
	if (n > 9)
	{
		result += ft_putnbr(n / 10);
		if (result == -1)
			return (-1);
	}
	c = n % 10 + '0';
	result += ft_putchar(c);
	if (result == -1)
		return (-1);
	return (result);
}
