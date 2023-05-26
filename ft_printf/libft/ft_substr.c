/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:41:10 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/27 15:41:12 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			j;
	size_t			s_length;

	i = start;
	j = 0;
	s_length = ft_strlen(s);
	if (s_length < len + start)
		len = s_length - start;
	if (start > s_length)
		len = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr || !s)
		return (NULL);
	while (j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
