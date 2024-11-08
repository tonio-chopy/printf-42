/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:23:42 by alaualik          #+#    #+#             */
/*   Updated: 2024/11/04 19:24:32 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_hex_recursive(unsigned long n)
{
	char	digit;

	if (n < 16)
	{
		if (n < 10)
			digit = n + '0';
		else
			digit = n - 10 + 'a';
		write(1, &digit, 1);
		return ;
	}
	write_hex_recursive(n / 16);
	if (n % 16 < 10)
		digit = (n % 16) + '0';
	else
		digit = (n % 16) - 10 + 'a';
	write(1, &digit, 1);
}

int	put_p(void *ptr)
{
	unsigned long	address;
	int				len;

	address = (unsigned long)ptr;
	len = 0;
	write(1, "0x", 2);
	len += 2;
	if (address == 0)
	{
		write(1, "0", 1);
		len += 1;
	}
	else
	{
		write_hex_recursive(address);
		len += 16;
	}
	return (len);
}
