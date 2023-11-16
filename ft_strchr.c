/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:44:08 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/16 14:31:01 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function searches for one character in a string. If it finds the
character, it returns a pointer to the first occurence of this
specific character.
If it don't find any occurence of this character, it returns NULL.
We also have to return a pointer to the character if the character is \0.
*/

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char) c;
	while (*s != '0')
	{
		if (*s == char_c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Hello World, Walter!";
	char	*result;
	int		c = 87; // 87 == 'W'

	result = ft_strchr(s, c);

	if (result == NULL)
		printf("'%c' not found in '%s'.\n", c, s);
	else
		printf("First occurence of '%c' found in '%s' at position %ld.\n",
		c, s, result - s);

	return (0);
}
*/
