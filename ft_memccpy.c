/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 09:49:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/26 11:08:50 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create buffers for the memory, assign them values of input pointers,
** return pointer to byte after c
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t				i;

	buffer = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		if (source[i] == (unsigned char)c)
			return ((void *)buffer + i + 1);
		i++;
	}
	return (NULL);
}
