/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:45:46 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/06 03:52:32 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_msg(char *str)
{
	int c;
	c = 0;
	write(1, "Log: ", 5);
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
	ft_putchar('\n');
}

void testandoMemset()
{
	char str[] = "-----Testando ft_memset-----";
	ft_msg(str);

	char strMemset[] = "Essa frase foi escrita para testar o memset";
	ft_msg(strMemset);
	ft_memset(strMemset, '*', 4);
	ft_msg(strMemset);

	ft_msg(str);
}

int	main(void)
{
	testandoMemset();
	return (0);
}