/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:21:41 by anttorre          #+#    #+#             */
/*   Updated: 2023/05/05 11:53:10 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*memory_allocated;

	memory_allocated = malloc(num_elements * size);
	if (memory_allocated == NULL)
		return (NULL);
	ft_bzero(memory_allocated, (num_elements * size));
	return (memory_allocated);
}
