/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:24:57 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/23 16:17:00 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*srct;
	int					i;

	dest = dst;
	srct = src;
	i = 0;
	if (dest == 0 && src == 0)
		return (dst);
	while (n > 0)
	{
		dest[i] = srct[i];
		i++;
		n--;
	}
	return (dst);
}
