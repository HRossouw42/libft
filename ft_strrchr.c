/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:53:10 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/02 16:25:11 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char		*ft_strrchr(const char *s, int c)
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
	while (i > len)
	{
		if ((char)c == s[i])
			return ((const char*)&s[i]);
		len--;
	}
	return (0);
}
