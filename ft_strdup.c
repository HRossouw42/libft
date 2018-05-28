/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:20:24 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/26 14:27:53 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*s_duplicate;
	size_t	len;

	len = ft_strlen(s);
	s_duplicate = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (s_duplicate == NULL)
		return (NULL);
	s_duplicate = (char *)ft_memcpy(s_duplicate, s, len);
	return (s_duplicate);
}
