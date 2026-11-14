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
void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int main()
{
	ft_putnbr(NT_MIN * -1I);
}