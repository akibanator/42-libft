/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:14:14 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/09 12:17:31 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy (void *dest, const void *src, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (c != ((unsigned char *)src)[i])
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		else
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			return (dest);
		}
		i++;
	}
	return (dest);
}
