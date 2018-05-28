/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:01:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/22 12:12:12 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

char	*ft_strncpy(char *dst, const char *src, unsigned int len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(int argc, char **argv) //test
{
		printf("1: %s\n", argv[1]);
		printf("2: %s\n", argv[2]);
		printf("Result = %s", ft_strncpy(argv[1], argv[2], 2)); 
	return (0);
}
