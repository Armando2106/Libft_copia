/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:44:35 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/22 13:36:48 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ult_car;

	ult_car = (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			ult_car = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)ult_car);
}
