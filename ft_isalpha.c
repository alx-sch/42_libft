/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:45:37 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 18:35:40 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test;

	test = '4';
	if (ft_isalpha(test))
		printf("Test variable '%c' is an alphabetic character.\n", test);
	else
		printf("Test variable '%c' is NOT an alphabetic character.\n", test);

	return (0);
}
*/