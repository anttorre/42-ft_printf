/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:59:46 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:05 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	size_t	s_length;
	char	*str_end;

	s = (char *)str;
	s_length = ft_strlen(s);
	str_end = s + s_length;
	while (s <= str_end)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	return (0);
}
