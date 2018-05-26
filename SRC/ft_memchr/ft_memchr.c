/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:22:22 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/26 13:34:17 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i > n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)(buffer + i));
		i++;
	}
	return (NULL);
}
