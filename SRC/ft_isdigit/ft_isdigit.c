/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:28:33 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/23 12:33:48 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}

int	main(void) //test
{
	printf("%d", ft_isdigit('0'));
	return (0);
}
