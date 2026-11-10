/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 17:02:38 by username         #+#    #+#              */
/*   Updated: 2026/11/03 17:02:40 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;
	unsigned char		find;

	str = (const unsigned char *) s;
	find = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == find)
			return ((void *) & str[i]);
		i++;
	}
	return (NULL);
}
