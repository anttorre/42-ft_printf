/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:24:35 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:57 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*st1;
	char	*st2;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (i < n && st1[i] != '\0' && st2[i] != '\0' && st1[i] == st2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}
