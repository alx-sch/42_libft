/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:35:35 by aschenk           #+#    #+#             */
/*   Updated: 2024/04/12 17:33:32 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_count_words():
Takes a string str and a delimiter character delim as parameters. Its purpose is
to count the number of words in the given string, where words are separated by
the specified delimiter.
*/
static size_t	ft_count_words(const char *str, char delim)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == delim)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != delim)
			i++;
	}
	return (count);
}

/*
Extracts a substring from the input string str starting from the beginning until
it encounters a specified delimiter or reaches the end of the string. The
function dynamically allocates memory for the extracted substring, copies the
characters from the input string to the newly allocated memory, and appends a
null terminator.
*/
static char	*ft_extract_word(const char *str, char delim)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	while (str[len] && str[len] != delim)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*
Uses ft_extract_word() and stores extracted word at the i-th position in the
array of string arrays. If the extraction is not successful, it cleans up the
previously allocated memory (substrings and array) and returns NULL.
*/
static char	*ft_word_into_array(
	const char *str, char delim,
	size_t i, char **arr)
{
	if (!str)
		return (NULL);
	arr[i] = ft_extract_word(str, delim);
	if (!arr[i])
	{
		while (i > 0)
		{
			i--;
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
	return (arr[i]);
}

/*
ft_split() returns an array of strings ('array of arrays' since strings are an
arrays of characters terminated by '\0').
The function takes the input string s and splits it into an array containing each
of its words. Words are separated by one or more instances of the character c,
which serves as the word delimiter. To facilitate easy iteration over the array
of words, an extra element is allocated and set to a NULL pointer, allowing a
simple loop condition just like to checking a NULL char in a string:
while (word_arr[i] != NULL).
*/
char	**ft_split(const char *s, char c)
{
	size_t	nb_words;
	size_t	i;
	char	**word_arr;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	word_arr = malloc(sizeof(char *) * (nb_words + 1));
	if (!word_arr)
		return (NULL);
	i = -1;
	while (++i < nb_words)
	{
		while (*s && *s == c)
			s++;
		word_arr[i] = ft_word_into_array(s, c, i, word_arr);
		if (word_arr[i] == NULL)
			return (NULL);
		while (*s && *s != c)
			s++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}

/*
#include <stdio.h>

int	main(void)
{
	char	**word_arr;
	size_t	i = 0;
	char	test_string[] = " 42 is a school   that teaches  coding  ";

	word_arr = ft_split(test_string, ' ');
	while (i < ft_count_words(test_string, ' '))
	{
		printf("%s\n", word_arr[i]);
		i++;
	}
}
*/
