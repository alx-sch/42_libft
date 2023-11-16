/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:44:06 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/16 14:30:58 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function is fairly easy to understand, it does the same thing as strchr(),
but locates the last occurence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	char_c;
	int		i;

	char_c = (char) c;
	i = ft_strlen(s);
	s += (i - 1);
	while (i > 0)
	{
		if (*s == char_c)
			return ((char *)s);
		i--;
		s--;
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

	result = ft_strrchr(s, c);

	if (result == NULL)
		printf("'%c' not found in '%s'.\n", c, s);
	else
		printf("Last occurence of '%c' found in '%s' at position %ld.\n",
		c, s, result - s);

	return (0);
}
*/