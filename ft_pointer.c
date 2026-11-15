/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-bad <amel-bad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:35:13 by username          #+#    #+#             */
/*   Updated: 2026/11/15 11:54:57 by amel-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *p)
{
	unsigned long	ad;
	int				count;

	if (p == NULL)
		return (ft_putstr("(nil)"));
	count = 0;
	ad = (unsigned long)p;
	count += ft_putstr("0x");
	count += print_hex(ad);
	return (count);
}
