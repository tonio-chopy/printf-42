/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:40:46 by alaualik          #+#    #+#             */
/*   Updated: 2024/11/03 15:23:24 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format,...)
{
	int	count;
	va_list	args;
	va_start(args, format);

	count = 0;
	
	while (format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += put_c(va_arg(args, int));
			else if (*format == 's')
				count += putstr(va_arg(args,char *));
			else if (*format == 'd')
				count += ft_putnbr(va_arg(args, int));
			else if (*format == '%')
				write(1, "%", 1);
		}
		else
		{
			count += put_c(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
