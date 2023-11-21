/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:48:45 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 15:44:40 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
calloc() works in the same way as malloc() does, but the difference is that
calloc() sets all the memory bytes are set to 0 instead of staying as the
gibberish that was there in memory before we allocated it.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}

/*
# include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = (int *)ft_calloc(10, sizeof(int));
	i = 0;
	if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Allocated memory block: ");
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);

	arr = (int *)ft_calloc(0, sizeof(int));
	i = 0;
	if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Allocated memory block: ");
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
*/
