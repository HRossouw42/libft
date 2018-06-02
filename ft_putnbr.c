/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:36:29 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/02 16:40:08 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n > 2147483647 || n < -2147483648)
		return (0);
	if (n == -2147483648) //fix me senpai
	{
		ft_putstr("-2147483648");
		return (0);
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return (0);
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (0);
}
