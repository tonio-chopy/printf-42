/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:20:56 by alaualik          #+#    #+#             */
/*   Updated: 2024/11/04 19:22:37 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	putstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		putstr("(null)");
		return (6);
	}
	while (str[i] && str)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
