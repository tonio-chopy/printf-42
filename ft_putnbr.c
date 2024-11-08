/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:10:35 by alaualik          #+#    #+#             */
/*   Updated: 2024/11/04 20:53:47 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int int_length(int n)
{
    int len = 0;

    if (n == 0)
        return (1);

    if (n < 0)
    {
        len++;
        if (n == -2147483648)
            n = 2147483647;
        else
            n = -n;
    }

    while (n > 0)
    {
        n /= 10;
        len++;
    }

    return len;
}

void write_int_recursive(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11); 
        return;
    }

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
        write_int_recursive(n / 10);

    char digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int put_d(int n)
{
    int len = int_length(n); 
    write_int_recursive(n);  
    return len;              
}

