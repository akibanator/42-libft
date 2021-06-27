/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:44:19 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:52:44 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destLen)
{
	size_t	i;
	size_t	srcLen;

	if (!dest || !src)
		return (0);
	srcLen = ft_strlen(src);
	printf("srcLen %zu\n", srcLen);
	i = 0;
	if (srcLen != 0)
	{
		while (src[i] != '\0' && i < destLen)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcLen);
}
