/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:38:10 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/25 14:38:13 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h> //unsure, it's in the man page

void	*memset(void *s, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		((char *)s[i] = 0);
		i++;
	}
	return (s);
}
