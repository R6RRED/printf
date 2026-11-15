/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexbig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-bad <amel-bad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:35:56 by username          #+#    #+#             */
/*   Updated: 2026/11/15 12:09:14 by amel-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexbig(unsigned int n)
{
	char	*hex;
	int		counter;

	counter = 0;
	hex = "0123456789ABCDEF";
	if (n < 16)
	{
		ft_putchar(hex[n]);
		counter += 1;
	}
	else
	{
		counter += print_hexbig(n / 16);
		counter += ft_putchar(hex[n % 16]);
	}
	return (counter);
}

// int main()
// {
//     print_hex(INT_MIN);
//     return 0;
// }
