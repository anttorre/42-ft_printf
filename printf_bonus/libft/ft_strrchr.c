/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:45:45 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:55:09 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*s;
	size_t			s_length;
	char			*fin;

	s = (char *)str;
	s_length = ft_strlen(str);
	fin = s + s_length;
	while (fin >= s)
	{
		if (*fin == (char)c)
			return (fin);
		fin--;
	}
	return (0);
}
