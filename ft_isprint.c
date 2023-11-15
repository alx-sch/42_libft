/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:12:56 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 13:19:36 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h> // tp check native fct's behaviour

int	main(void)
{
	char	test;

	test = ' ';
	if (ft_isprint(test))
		printf("Test variable '%c' is a printable character.\n", test);
	else
		printf("Test variable '%c' is NOT a printable character.\n", test);
	return (0);
}
*/