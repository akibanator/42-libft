/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:22:30 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:38:58 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subStr;
	size_t	s_size;
	size_t	malloc_size;
	size_t	start_i;

	if (s == 0)
		return (0);
	start_i = start;
	s_size = ft_strlen(s);
	if (start > s_size)
	{
		malloc_size = 1;
		start_i = 0;
	}
	else if (start + len > s_size)
	{
		malloc_size = s_size - start + 1;
	}
	else
		malloc_size = len + 1;
	subStr = malloc(malloc_size);
	if (subStr == 0)
		return (0);
	ft_strlcpy(subStr, s + start_i, malloc_size);
	return (subStr);
}
