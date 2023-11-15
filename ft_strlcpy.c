/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:33:08 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/15 18:34:45 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "HELLOOOO!";
	char str2[] = "len:5";
	size_t size = 6;

	printf("Src string before ft_strlcpy(): '%s'\n", str1);
	printf("Dst string before ft_strlcpy(): '%s'\n", str2);
	printf("Size: %zu\n", size);
	printf("Total length of src string: %zu\n", ft_strlcpy(str2, str1, 6));
	printf("Dst string after ft_strlcpy(): '%s'\n", str2);

	return(0);
}
*/