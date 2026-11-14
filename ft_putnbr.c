/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 17:05:33 by username         #+#    #+#              */
/*   Updated: 2026/11/03 17:05:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include"printf.h"
#include<limits.h>
int	ft_putnbr(int n)
{
	long	nb;
	int count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count = count + 1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		count = count + 1;
	}
	ft_putchar((nb % 10) + '0');
	count += 1;
	return count;
}

// int main()
// {
// 	ft_putnbr(2);
// }