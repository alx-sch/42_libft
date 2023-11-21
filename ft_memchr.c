/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:35:00 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 11:14:14 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memchr() function works similarly as the strchr() function, the difference
is that memchr() works with byte string (void *) where strchr() works with
'literal' strings (char *).
This means we can send whatever type of data we want to memchr() and it will
still work.
memchr() also has a third parameter, n. This parameter tells the function how
many bytes we want to search in. We need this parameter since s is not a
'literal' string, it doesn't have a NUL-terminating character.
If we didn't have this parameter, we would be reading a random
number of bytes each time.
*/

/*
Casting to unsigned char in the ft_memchr function is done to ensure proper
comparison when searching for a specific byte in the memory block
pointed to by s.
The reason for using unsigned char is related to the way characters are
represented in C.
In C, the char type can be either signed or unsigned, depending on the
compiler and platform. When dealing with raw memory or byte-wise operations,
it's common to treat characters as unsigned to avoid unexpected behavior
when comparing values.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char to_find = 'o';
	char *result;

	result = ft_memchr(str, to_find, sizeof(str));
	printf("String: '%s'\n", str);
	printf("Byte to be located: '%c'\n", to_find);

	if (result == NULL)
		printf("Character not found\n\n");
	else
		printf("Character found at position %ld\n\n", result - str);

	to_find = '\0';
	result = ft_memchr(str, to_find, sizeof(str));
	printf("String: '%s'\n", str);
	printf("Byte to be located: '%c'\n", to_find);
	if (result == NULL)
		printf("Character not found\n\n");
	else
		printf("Character found at position %ld\n\n", result - str);

	to_find = 'x';
	result = ft_memchr(str, to_find, sizeof(str));
	printf("String: '%s'\n", str);
	printf("Byte to be located: '%c'\n", to_find);
	if (result == NULL)
		printf("Character not found\n\n");
	else
		printf("Character found at position %ld\n\n", result - str);

	return (0);
}
*/
