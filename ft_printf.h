/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaualik <alaualik@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:07:27 by alaualik          #+#    #+#             */
/*   Updated: 2024/11/04 19:24:15 by alaualik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	put_c(const char c);
int	ft_printf(const char *format, ...);
int	putstr(const char *str);
int	put_d(int n);
int     put_p(void *ptr);

#endif
