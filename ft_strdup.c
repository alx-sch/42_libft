/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:35:33 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 16:19:33 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  strdup() function returns a pointer to a new string which is a duplicate of
the string s. Memory for the new string is obtained  with malloc(), and can be
freed with free().

On success, the strdup() function returns a pointer to the duplicated string.
It returns NULL if insufficient memory was available, with errno set to indicate
the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new_s)
		return (NULL);
	while (*src)
		new_s[i++] = *src++;
	new_s[i] = '\0';
	return (new_s);
}

/*
# include <stdio.h>

int	main(void)
{
	char *mine;
	char *library;
	char test_string[30] = "Copy Me!";

	mine = ft_strdup(test_string);
	library = strdup(test_string);
	printf("'My' fct: '%s'\nLib fct: '%s'\n", mine, library);
	printf("Bytes in test: %zu\n", sizeof(test_string));
	printf("Bytes in 'my' fct: %zu\n", sizeof(mine));
	printf("Bytes in 'lib' fct': %zu\n", sizeof(library));

	return (0);
}
*/
