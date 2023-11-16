/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:27:27 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/16 17:25:08 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
As the man description says, this function writes len bytes of value c to the
string b.
The value of c will be converted to an unsigned char, so to set this value in
the b string, we'll have to convert the b string to a pointer to unsigned char.
But remember the return value, we have to return the first parameter of the
function, the void *b string.
So how do we convert this parameter without changing the original one ?
Think about temporary variables.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	char_c;

	ptr = (unsigned char *)s;
	char_c = (unsigned char) c;
	while (n > 0)
	{
		*ptr = char_c;
		ptr++;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char chars[10] = "ABCDEFGHIJ";
	char my_chars[10] = "ABCDEFGHIJ";
	memset(chars + 5, 'X', 4 * sizeof(char));
	ft_memset(my_chars + 5, '9', 4 * sizeof(char));
	printf("== TEST: Set a certain block of memory to specific char value ==\n");

	printf("memset():\n");
	int i = 0;
	while (i < 10)
	{
		printf("%c ", chars[i]);
		i++;
	}
	printf("\nft_memset():\n");
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