/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:50:56 by username         #+#    #+#              */
/*   Updated: 2026/11/03 16:50:57 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_putstr_fd(char *s)
{
	int count = 0;
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		count++;
	}return count;
}
