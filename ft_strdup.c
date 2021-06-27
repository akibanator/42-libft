/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 02:29:57 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/14 02:43:06 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	strLen;

	strLen = ft_strlen(s);
	i = 0;
	str = malloc(strLen + 1);
	if (str == 0)
		return (0);
	while (i < strLen)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
