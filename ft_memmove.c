/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:26:03 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/23 16:17:58 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destino;
	const unsigned char	*fuente;

	destino = dst;
	fuente = src ;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (fuente < destino && fuente + len > destino)
	{
		while (len-- > 0)
		{
			destino[len] = fuente[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*destino = *fuente;
			destino++;
			fuente++;
			len--;
		}
	}
	return (dst);
}
