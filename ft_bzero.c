/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:21:44 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 14:32:52 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function works the same way as the memset() function, except you don't
have to specify what character to write, it'll always be 0 (NUL character).
This function does not return anything and if the number of characters
to write you passed as size_t n is 0, bzero does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char chars[10] = "ABCDEFGHIJ";
	char my_chars[10] = "ABCDEFGHIJ";
	bzero(chars + 5, 4 * sizeof(char));
	ft_bzero(my_chars + 5, 4 * sizeof(char));
	printf("== TEST: Set a certain block of memory to 0 ==\n");

	printf("bzero():\n");
	int i = 0;
	while (i < 10)
	{
		printf("%c ", chars[i]);
		i++;
	}
	printf("\nft_bzero():\n");
	i = 0;
	while (i < 10)
	{
		printf("%c ", my_chars[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
