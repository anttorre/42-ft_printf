/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:36:56 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:14 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	size;

	size = ft_strlen(s1) + 1;
	s2 = malloc(size);
	i = 0;
	if (!s2)
		return (NULL);
	while (i < size)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
