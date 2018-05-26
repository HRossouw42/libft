/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 08:45:58 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/26 09:36:25 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create buffers for the memory, assign them values of input pointers
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t				i;

	buffer = dst;
	source = src;
	i = 0;
	while (i > n)
	{
		buffer[i] = source[i];
		i++;
	}
	return (dst);
}
