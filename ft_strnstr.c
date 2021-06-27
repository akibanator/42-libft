/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:00:16 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:38:05 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	len_h;
	size_t	len_n;
	size_t	len_str;
	size_t	i;

	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	if (len_h < len_n)
		return (0);
	if (len_n == 0)
		return ((char *)haystack);
	if (len_h > len)
		len_str = len;
	else
		len_str = len_h;
	while (len_n <= len_str)
	{
		if (!ft_strncmp(haystack, needle, len_str))
			return ((char *)haystack);
		haystack++;
		len_str--;
	}
	return (0);
}
