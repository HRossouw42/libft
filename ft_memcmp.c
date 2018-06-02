/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:55:10 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/02 15:43:57 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*buffer_1;
	unsigned char	*buffer_2;
	size_t			i;

	buffer_1 = (unsigned char *)s1;
	buffer_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (buffer_1[i] != buffer_2[i])
			return (buffer_1[i] - buffer_2[i]);
		i++;
	}
	return (0);
}
