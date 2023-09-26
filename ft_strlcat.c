/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:05:41 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/23 16:20:38 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	long_dst;
	size_t	long_src;
	size_t	copy_len;
	size_t	j;
	size_t	i;

	long_dst = 0;
	long_src = 0;
	j = 0;
	i = 0;
	while (dst[long_dst] != '\0' && long_dst < dstsize)
		long_dst++;
	while (src[long_src] != '\0')
		long_src++;
	copy_len = dstsize - long_dst;
	if (copy_len == 0)
		return (long_dst + long_src);
	i = long_dst;
	while (i < dstsize - 1 && src[j] != '\0' && j < copy_len - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (long_dst + long_src);
}
