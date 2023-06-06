/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:54:18 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:48 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_length;
	char	*new_string;
	size_t	i;

	s_length = ft_strlen(s);
	new_string = malloc(s_length * sizeof(char) + 1);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
