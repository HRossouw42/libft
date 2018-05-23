/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:35:13 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/22 15:38:33 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test
#include <string.h> //test

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
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

	ft_strcat(str, str2);
	ft_strcat(str, " ...");
	ft_strcat(str, "  Goodbye World!");
	puts(str);
}
