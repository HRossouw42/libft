/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:01:04 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/21 15:40:56 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

char	*ft_strncpy(char *dst, char *src, int len)
{
	int i;

	i = 0;
	len = 2;
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
	if (argc == 4)
	{
		printf("1: %s\n", argv[1]);
		printf("2: %s\n", argv[2]);
		printf("Result = %s", ft_strncpy(argv[1], argv[2], argv[3])); 
	}
	return (0);
}
