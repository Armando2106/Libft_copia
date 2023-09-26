/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:23:19 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/23 16:10:58 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr)
/*	if (ptr == NULL)
	{
		return (NULL);
	}*/
		ft_bzero(ptr, count * size);
	return (ptr);
}
