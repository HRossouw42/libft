/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:48:43 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/25 14:27:52 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //unsure, it's in the man page

void	*memset(void *s, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (s[0] == 0)
		return (s);
	while (i < n)
	{
		((char *)s[i] = (unsigned char *)c);
		i++;
	}
	return (s);
}
