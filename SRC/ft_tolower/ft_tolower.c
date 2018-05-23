/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:16:40 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/23 15:24:34 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main(void) //test
{
	printf("%c", ft_tolower('d'));
	return (0);
}
