/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-bad <amel-bad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:35:53 by username          #+#    #+#             */
/*   Updated: 2026/11/15 11:51:24 by amel-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n)
{
	char	*hex;
	int		counter;

	hex = "0123456789abcdef";
	counter = 0;
	if (n < 16)
	{
		ft_putchar(hex[n]);
		counter++;
	}
	else
	{
		counter += print_hex(n / 16);
		counter += ft_putchar(hex[n % 16]);
	}
	return (counter);
}

// int main()
// {
//     print_hex(INT_MIN);
//     return 0;
// }
