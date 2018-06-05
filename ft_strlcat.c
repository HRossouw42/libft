/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:21:16 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/05 11:46:21 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				i;
	unsigned int	dst_size;

	i = 0;
	dst_size = 0;
	while (dst[dst_size])
		dst_size++;
	while (src[i])
	{
		if (dst_size < size - 1)
			dst[dst_size] = src[i];
		i++;
	}
	dst[dst_size - 1] = '\0';
	return (dest_size);
}
