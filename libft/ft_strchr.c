/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:51:01 by username         #+#    #+#              */
/*   Updated: 2026/11/03 16:51:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == ch)
			return ((char *) & s[i]);
		i++;
	}
	if ((unsigned char) s[i] == ch)
		return ((char *) & s[i]);
	return (NULL);
}
