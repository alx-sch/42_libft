/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:10:05 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 13:12:16 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test;

	test = '#';
	if (ft_isascii(test))
		printf("Test variable '%c' is an ASCII character.\n", test);
	else
		printf("Test variable '%c' is NOT an ASCII character.\n", test);
	return (0);
}
*/