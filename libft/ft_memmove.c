/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 17:01:05 by username         #+#    #+#              */
/*   Updated: 2026/11/06 17:07:20 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *) src);
	dst = (char *) dest;
	sr = (char *) src;
	if (sr < dst)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = sr[i];
		}
		return (dest);
	}
	ft_memcpy(dst, sr, n);
	return (dest);
}
