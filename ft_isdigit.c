/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:03:15 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 13:05:58 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test;

	test = 'r';
	if (ft_isdigit(test))
		printf("Test variable '%c' is a digit.\n", test);
	else
		printf("Test variable '%c' is NOT a digit.\n", test);
	return (0);
}
*/
