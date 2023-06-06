/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:35:31 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/23 14:26:35 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libft.h"

static int	ft_nbrlen(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_xtoa(unsigned long long n)
{
	char			*str;
	size_t			num_length;

	num_length = ft_nbrlen(n);
	str = (char *)malloc((num_length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[num_length] = '\0';
	num_length--;
	if (n == 0)
		str[num_length] = '0';
	while (n > 0)
	{
		str[num_length] = HEX[n % 16];
		n /= 16;
		num_length--;
	}
	return (str);
}
