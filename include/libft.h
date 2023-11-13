/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:55:49 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/13 17:59:28 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/*
** Part 1
*/

int		ft_toupper(int c);
	// ft_isalpha
	// ft_isdigit
	// ft_tolower
	// ft_isalnum
	// ft_isascii
	// ft_isprint
	// ft_strchr
	// ft_strrchr
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
	// ft_memset
	// ft_bzero
	// ft_memchr
	// ft_memcpy
	// ft_memcmp
	// ft_memmove
	// ft_strnstr
	// ft_strlcpy
	// ft_strlcat
	// ft_atoi

// malloc()

	// ft_calloc
	// ft_strdup

/*
 **  Part 2
*/

	// ft_substr
	// ft_strjoin
	// ft_strtrim
	// ft_split
	// ft_itoa
	// ft_strmapi
	// ft_striteri
	// ft_putchar_fd
	// ft_putstr_fd
	// ft_putendl_fd
	// ft_putnbr_fd

/*
 ** Bonus
*/
	// ft_lstnew
	// ft_lstadd_front
	// ft_lstsize
	// ft_lstlast
	// ft_lstadd_back
	// ft_lstdelone
	// ft_lstclear
	// ft_lstiter
	// ft_lstmap

#endif
