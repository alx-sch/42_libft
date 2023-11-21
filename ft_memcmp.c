/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:06:07 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 11:26:14 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcmp() compares byte strings. It works similarly to the strncmp() function.
The difference here is that memcmp() works with bytes strings so it takes
void pointers as parameter, plus a third parameter, the number of first bytes
n to be compared.
The return value depends on what difference is found:
	- If there is no difference between both strings, the return value will be 0.
	- If there is a difference, and the first different character in s2 is
	greater than the byte at the same place in s1, the result will be negative.
	- If there is a difference, and the first different character in s2 is less
	than the character at the same place in s1, the result will be positive.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (ptr1[i] == ptr2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
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
	printf("== TEST ==\nMemory 1: %s\nMemory 2: %s\nn:%d\n", string1, string2, n);
	printf("Result memcmp(): %d\n", memcmp(string1, string2, n));
	printf("Result 'my' ft_memcmp(): %d\n", ft_memcmp(string1, string2, n));

	return (0);
}
*/
