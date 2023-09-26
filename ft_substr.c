/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aojeda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:07:48 by aojeda            #+#    #+#             */
/*   Updated: 2023/09/26 15:14:12 by aojeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		return (ft_strdup(""));
	}
	if (len < s_len - start)
	{
		sub_len = len;
	}
	else
	{
		sub_len = s_len - start;
	}
	substr = (char *)malloc((sub_len + 1) * sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i++ < sub_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[sub_len] = '\0';
	return (substr);
}
