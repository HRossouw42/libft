/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:17:46 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/23 11:18:19 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //TEST

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]); //return 0 if equal, negative if s1's \0 < s2's \0 or + if reverse
}

int		main(int argc, char **argv) //TEST
{
	printf("%d", ft_strncmp(argv[1], argv[2], 3));
	return (0);
}
