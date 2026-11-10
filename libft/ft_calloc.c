/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-bad <amel-bad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:49:40 by username          #+#    #+#             */
/*   Updated: 2026/11/06 17:16:35 by amel-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			total;
	size_t			i;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	total = count * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
