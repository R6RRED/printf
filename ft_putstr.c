/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:50:56 by username         #+#    #+#              */
/*   Updated: 2026/11/15 11:35:44 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		if (write(1, s, 1) < 0)
			return (-1);
		s++;
		count++;
	}
	return (count);
}
