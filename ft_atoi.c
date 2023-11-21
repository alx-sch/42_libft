/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:33:52 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 14:47:40 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The atoi() function converts a string to its int representation.
Some things that the atoi() function does are not clearly said in the man.
I'll quickly list them here: The string passed as parameter may begin with an
arbitrary number of whitespaces as determined by isspace(3).
After the arbitrary number of whitespaces, there can be one single optional
'+' or '-' sign
The remainder of the string will be converted to an int, stopping at the
first character which is not a valid digit in the given base
(in our case we only need to manage base 10, so the valid digits are 0-9)
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign = sign * -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * sign);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("123")); // Output: 123
	printf("%d\n", ft_atoi("-123")); // Output: -123
	printf("%d\n", ft_atoi("  123")); // Output: 123
	printf("%d\n", ft_atoi("123  ")); // Output: 123
	printf("%d\n", ft_atoi("   123  ")); // Output: 123
	printf("%d\n", ft_atoi("   -123  ")); // Output: -123
	printf("%d\n", ft_atoi("   +123  ")); // Output: 123
	printf("%d\n", ft_atoi("")); // Output: 0
	printf("%d\n", ft_atoi("abc")); // Output: 0
	printf("%d\n", ft_atoi("  123abc")); // Output: 123
	printf("%d\n", ft_atoi("2147483647")); // Output: 2147483647
	printf("%d\n", ft_atoi("-2147483648")); // Output: -2147483648
	printf("%d\n", ft_atoi("2147483648")); // Output: -2147483648
	printf("%d\n", ft_atoi("-2147483649")); // Output: 2147483647
	return (0);
}
*/
