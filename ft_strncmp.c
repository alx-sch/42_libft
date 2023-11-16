/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:21:01 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/16 13:48:53 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strncmp() compares string in a lexicographic order, this means that it compares
each characters by their corresponding ASCII values.
strncmp() compares maximum n characters in both strings.
The returned value depends on what difference is found.
If the two strings are the same, the returned result will be 0 since there is
no difference.
If there is a difference, and the first different character in s2 is greater
than the character at the same place in s1, the returned result will be negative.
If there is a difference, and the first different character in s2 is less than
the character at the same place in s1, the returned result will be positive.
*/

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
