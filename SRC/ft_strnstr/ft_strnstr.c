/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:58:27 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/24 16:58:30 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //test

char	*ft_strnstr(char *str, char *to_find, size_t until_len)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i] != '\0' && i < until_len)
	{
		while (str[i + j] == to_find[j])
		{
			if (j == len - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	main(void) //test
{
	char s1[] = "HELLO DOLLY";
	char s2[] = "LLO";
	printf("%s", ft_strnstr(s1, s2, 2));
	return (0);
}
