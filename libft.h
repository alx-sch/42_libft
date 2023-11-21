/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:55:49 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/21 11:27:01 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

// Core Functions
int		ft_isalpha(int c);
int		ft_digit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
	// ft_bzero
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
	// ft_atoi

// malloc()

	// ft_calloc
	// ft_strdup

// Secondary Functions
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

// Bonus Functions
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
