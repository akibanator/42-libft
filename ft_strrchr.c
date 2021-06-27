/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:26:18 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:46:50 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*s;
	unsigned char	chr;
	size_t			lenStr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	lenStr = ft_strlen(str + 1);
	while (lenStr--)
	{
		if (chr == s[lenStr])
			return ((char *)s + lenStr);
	}
	return (0);
}
