/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:48:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/02 15:24:28 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = b;
	i = 0;
	if (s[0] == 0)
		return (s);
	while (i < n)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return ((void *)buffer);
}
