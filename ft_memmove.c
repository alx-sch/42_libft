/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:27:15 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 14:12:28 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memmove() function does the same thing as the memcpy() function but this
time, the copy is made in a non-destructive manner. This means that
both strings (src and dst) can overlap in memory and this function does not
overwrite part of, or the entirety of the string when making the copy.

This is only important when src is before dst (therefore changing src while cp).
'if ((size_t)dest - (size_t)src < n)' is only true src is before dst as a
'negative' (size_t)dest - (size_t)src does not exist
(comes out SIZE_MAX for size_t).
*/

#include "libft.h"
#include <stdio.h>
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

void printArray(const char *label, const char *arr, size_t size) {
	printf("%s", label);
	for (size_t i = 0; i < size; i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}

int main()
{
	char original[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	char *src = original;
	char *dest1 = original + 2;

	size_t n = 3;

	printf("== Before ft_memmove() ==\n");
	printArray("Memory block: ", original, 6);
	printArray("Src: ", src, 4);
	printArray("Dst: ", dest1, 4);

	printf("\nBytes to be moved from src to dst: %zu\n", n);
	ft_memmove(dest1, src, n);
	printf("\n== After ft_memmove() ==\n");
	printArray("Memory block: ", original, 6);
	printArray("Src: ", src, 4);
	printArray("Dst: ", dest1, 4);

	return (0);
}
*/
