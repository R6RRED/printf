/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-bad <amel-bad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:35:32 by username          #+#    #+#             */
/*   Updated: 2026/11/15 11:55:37 by amel-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdarg.h>

int	print_hex(unsigned long n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	print_hexbig(unsigned int n);
int	ft_pointer(void *p);
int	ft_putunbr(unsigned int n);

#endif
