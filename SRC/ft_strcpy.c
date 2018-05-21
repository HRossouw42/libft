/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:39:12 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/21 14:35:20 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int argc, char **argv) //test
{
	if (argc == 3)
	{
		printf("1: %s\n", argv[1]);
		printf("2: %s\n", argv[2]);
		printf("Result = %s", ft_strcpy(argv[1], argv[2])); 
	}
	return (0);
}
