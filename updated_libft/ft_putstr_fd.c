/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:29:02 by aschenk           #+#    #+#             */
/*   Updated: 2024/04/12 17:30:40 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
s: The string to output.
fd: The file descriptor on which to write.
*/
void	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		ft_putchar_fd(*ptr, fd);
		ptr++;
	}
}

/*
int	main(void)
{
	char	test_str[] = "Print me!";

	ft_putstr_fd(test_str, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
