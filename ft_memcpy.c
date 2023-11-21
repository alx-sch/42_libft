/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:33:40 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 11:07:05 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memcpy function copies maximum n bytes from src to dst.
The man talks about memory overlapping, I'll explain this with details on
the memmove function page.
This functions works like the strcpy function, except that memcpy accepts
void * as parameters, so we can give it any type of pointer we want to copy.
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *) dest;
	char_src = (const char *) src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main (void)
{
	// Testing with strings (works with null)
	char src[] = "Copy this!";
	char dest[100] = "destination";

	printf("Before ft_memcpy():\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_memcpy(dest, src, sizeof(src));
	printf("After ft_memcpy():\n");
	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);

	//Testing to see if pointer address in dest_ptr and dest are the same
	printf("Check if pointer address stays the same:\n");
	char *dest_after = ft_memcpy(dest, src, sizeof(src));
	printf("dest (before): %p\n", dest);
	printf("dest (after) %p\n\n", dest_after);


	// Testing with arrays
	int src_array [5] = {1, 2, 3, 4, 5};
	int dst_array[5];

	ft_memset(dst_array, 0, sizeof(dst_array));

	printf("Testing with arrays:\n");
	printf("Before ft_memcpy():\n");
	printf("src_array: ");

	int 	i;

	i = 0;
	while (i < 5)
	{
		printf("%d ", src_array[i]);
		i++;
	}
	printf("\n");

	printf("dst_array: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", dst_array[i]);
		i++;
	}
	printf("\n");

	ft_memcpy(dst_array, src_array, sizeof(src_array));
	printf("Before ft_memcpy():\n");
	printf("src_array: ");

	i = 0;
	while (i < 5)
	{
		printf("%d ", src_array[i]);
		i++;
	}
	printf("\n");

	printf("dst_array: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", dst_array[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
