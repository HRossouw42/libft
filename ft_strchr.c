/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:11:30 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/05 12:18:10 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	if (s == 0)
		return (0);
	if ((c > 255) || (c < 0))
	{
		return (0);
	}
	while (i < len)
	{
		if ((char)c == s[i])
			return ((char*)&s[i]);
		i++;
	}
	return (0);
}
