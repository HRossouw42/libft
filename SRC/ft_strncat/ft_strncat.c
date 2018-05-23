/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:39:14 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/22 15:53:08 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test
#include <string.h> //test

char	*ft_strncat(char *dest, const char *src, size_t count)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (i < count && src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

int		main(void) //test
{
	char str[50] = "Hello";
	char str2[50] = "World!";

	ft_strncat(str, str2, 6);
	ft_strncat(str, " ...", 4);
	ft_strncat(str, "  Goodbye World!", 4);
	puts(str);
}
