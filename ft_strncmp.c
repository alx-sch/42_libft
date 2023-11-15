/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:21:01 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 12:40:49 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		n;
	char	string1[50];
	char	string2[50];

	n = 9;
	strcpy(string1, "1234567890");
    strcpy(string2, "1234567");

	printf(" \n");
	printf("== TEST ==\nS1: %s\nS2: %s\nn:%d\n", string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	return (0);
}
*/
