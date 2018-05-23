/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:20:12 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/21 12:37:46 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		i++;
	return(len);
}

int		main(void) //test
{
	char a[] = "Hello World";

	printf("%d", ft_strlen(a));
	return (0);
}
