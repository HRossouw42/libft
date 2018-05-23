/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:43:36 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/21 15:50:17 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //TEST

int	ft_atoi(const char *str)
{
	int i;
	int negative;
	int number;

	i = 0;
	negative = 0;
	number = 0;
	while(str[i] != '\0' || str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		if (str[i] == '-')
			negative = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			number = (number * 10) + (str[i] - '0'); //number = number*10 + i(ascii value) -48
		i++;
	}
	if (negative == 1)
		return (-number);
	else
		return (number);
}

int	main(int argc, char **argv) //TEST
{
	printf("%d", ft_atoi(argv[1]));
	return (0);
}
