/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:36:31 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/16 16:10:52 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function works in the same way as strchr() but searches for the
complete substring in max 'len' characters instead of in the complete haystack.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char haystack1[] = "Hello, World!";
	char needle1[] = "World";

	char haystack2[] = "This is a test";
	char needle2[] = "is";

	char haystack3[] = "Searching for nothing";
	char needle3[] = "";

	char haystack4[] = "No needle to be found";
	char needle4[] = "xxx";

	char haystack5[] = "Beginning and end!";
	char needle5[] = "end";


	char *result;
	char *result_strstr;

	// Test case 1
	result_strstr = strnstr(haystack1, needle1, strlen(haystack1));
	result = ft_strnstr(haystack1, needle1, strlen(haystack1));
	printf("Test 1 Haystack: %s\n", haystack1);
	printf("Test 1 Needle: %s\n", needle1);
	if (result_strstr != NULL)
		printf("Test 1 strstr(): Found at position %ld\n",
			result_strstr - haystack1);
	else
		printf("Test 1 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 1 ft_strstr(): Found at position %ld\n",
			result - haystack1);
	else
		printf("Test 1 ft_strstr(): Not found\n");
	printf(" \n");

	// Test case 2
	result_strstr = strnstr(haystack2, needle2, strlen(haystack2));
	result = ft_strnstr(haystack2, needle2, strlen(haystack2));
	printf("Test 2 Haystack: %s\n", haystack2);
	printf("Test 2 Needle: %s\n", needle2);
	if (result_strstr != NULL)
		printf("Test 2 strstr(): Found at position %ld\n",
			result_strstr - haystack2);
	else
		printf("Test 2 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 2 ft_strstr(): Found at position %ld\n",
			result - haystack2);
	else
		printf("Test 2 ft_strstr(): Not found\n");
	printf(" \n");


	// Test case 3
	result_strstr = strnstr(haystack3, needle3, strlen(haystack3));
	result = ft_strnstr(haystack3, needle3, strlen(haystack3));
	printf("Test 3 Haystack: %s\n", haystack3);
	printf("Test 3 Needle: %s\n", needle3);
	if (result_strstr != NULL)
		printf("Test 3 strstr(): Found at position %ld\n",
			result_strstr - haystack3);
	else
		printf("Test 3 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 3 ft_strstr(): Found at position %ld\n",
			result - haystack3);
	else
		printf("Test 3 ft_strstr(): Not found\n");
	printf(" \n");

	// Test case 4
	result_strstr = strnstr(haystack4, needle4, strlen(haystack4));
	result = ft_strnstr(haystack4, needle4, strlen(haystack4));
	printf("Test 4 Haystack: %s\n", haystack4);
	printf("Test 4 Needle: %s\n", needle4);
	if (result_strstr != NULL)
		printf("Test 4 strstr(): Found at position %ld\n",
			result_strstr - haystack4);
	else
		printf("Test 4 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 4 ft_strstr(): Found at position %ld\n",
			result - haystack4);
	else
		printf("Test 4 ft_strstr(): Not found\n");
	printf(" \n");

	// Test case 5
	result_strstr = strnstr(haystack5, needle5, 10);
	result = ft_strnstr(haystack5, needle5, 10);
	printf("Test 5 Haystack: %s\n", haystack5);
	printf("Test 5 Needle: %s\n", needle5);
	printf("Only checking first 10 positions of haystack.\n");
	if (result_strstr != NULL)
		printf("Test 5 strstr(): Found at position %ld\n",
			result_strstr - haystack5);
	else
		printf("Test 5 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 5 ft_strstr(): Found at position %ld\n",
			result - haystack5);
	else
		printf("Test 5 ft_strstr(): Not found\n");
	printf(" \n");

	return (0);
}
*/