/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 23:31:51 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:51:30 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destLen)
{
	size_t	i;
	size_t	destLenCat;

	i = 0;
	destLenCat = ft_strlen(dest);
	while (destLenCat < (destLenCat + destLen))
	{
		((unsigned char *)dest)[destLenCat] = ((unsigned char *)src)[i];
		destLenCat++;
		i++;
	}
	return (destLenCat);
}
