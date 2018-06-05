/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:58:27 by hrossouw          #+#    #+#             */
/*   Updated: 2018/06/05 12:07:52 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t n)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (little[len] != '\0')
		len++;
	if (len == 0)
		return (big);
	while (big[i] != '\0' && i < n)
	{
		while (big[i + j] == little[j])
		{
			if (j == len - 1)
				return (big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
