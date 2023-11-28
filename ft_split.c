/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:35:35 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/28 15:46:36 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_split() returns an array of strings ('array of arrays' since strings are an
arrays of characters terminated by '\0').
The function takes the input string s and splits it into an array containing each
of its words. Words are separated by one or more instances of the character c,
which serves as the word delimiter. To facilitate easy iteration over the array
of words, an extra element is allocated and set to a NULL pointer, allowing a
simple loop condition just like to checking a NULL char in a  string:
while (word_arr[i] != NULL).

ft_count_words():
Takes a string str and a delimiter character delim as parameters. Its purpose is
to count the number of words in the given string, where words are separated by
the specified delimiter.

ft_first_word_len():
Returns the length of the initial word in a string until a specified delimiter or
the NUL char is encountered. It assumes that there are no leading delimiters.

ft_extract_first_word():
Returns a new dynamically allocated string that contains the characters of the
first word in the input string until the delimiter or the end of the string is
reached. It uses ft_first_word_len() to determine the length of the first word.

ft_split():
If the input string s is NULL, the function immediately returns NULL, indicating
an invalid input.
The function allocates memory for an array of strings (word_arr). The size of
this array is determined by the number of words in the input string, calculated
using ft_count_words(). An additional element is reserved for the terminating
NULL pointer.
Then, the function iterates through the input string in a loop, skipping
delimiters until it finds the beginning of a word. It extracts this word using
ft_extract_first_word(), stores it in word_arr, and the array index i is
incremented -- this process (skipping delimiters, extracting and storing
encountered word) is repeated until the whole string is looped through.
After processing all words, the last element of the word_arr is set to NULL,
indicating the end of the array.
*/

#include "libft.h"

size_t	ft_count_words(char const *str, char delim)
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

size_t	ft_first_word_len(char *str, char delim)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != delim)
		i++;
	return (i);
}

char	*ft_store_extracted_word(char *str, char delim,
	char ***word_arr, size_t i)
{
	size_t	len;
	char	*word;
	size_t	j;

	len = ft_first_word_len(str, delim);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	(*word_arr)[i] = word;
	return (word);
}

void	ft_free_word_arr(char **word_arr, size_t i)
{
	while (i > 0)
		free(word_arr[--i]);
	free(word_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**word_arr;
	size_t	i;

	word_arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!word_arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_store_extracted_word((char *)s, c, &word_arr, i))
			{
				ft_free_word_arr(word_arr, i);
				return (NULL);
			}
			i++;
		}
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
