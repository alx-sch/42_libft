/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:41:14 by aschenk           #+#    #+#             */
/*   Updated: 2024/03/09 19:01:04 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Like the strncmp() function, but compares entire strings, no need to pass
a size.
-	If the two strings are identical, the function returns 0, indicating
	no difference.
-	If a difference is found, and the first differing character in the second
	string (s2) is greater than the character at the same position in the first
	string (s1), the result is negative.
-	If the first differing character in s2 is less than the character at the
	same position in s1, the result is positive.
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
