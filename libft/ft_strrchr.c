/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:51:34 by username         #+#    #+#              */
/*   Updated: 2026/11/03 16:51:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*result;
	size_t			i;

	ch = (unsigned char) c;
	result = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == ch)
			result = (char *) & s[i];
		i++;
	}
	if ((unsigned char) s[i] == ch)
		result = (char *) & s[i];
	return (result);
}
