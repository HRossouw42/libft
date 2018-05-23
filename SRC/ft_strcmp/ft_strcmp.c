/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:07:17 by hrossouw          #+#    #+#             */
/*   Updated: 2018/05/21 16:13:09 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //TEST

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]); //return 0 if equal, negative if s1's \0 < s2's \0 or + if reverse
}

int		main(int argc, char **argv) //TEST
{
	printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
}
