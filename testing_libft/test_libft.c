/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:58:52 by aschenk           #+#    #+#             */
/*   Updated: 2023/11/22 18:59:33 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

////////////////////////
///// TESTING FCTs /////
////////////////////////

void	*test_calloc(size_t num_el, size_t el_size, const char *el_type)
{
	void	*arr_lib = calloc(num_el, el_size);
	void	*arr_my = ft_calloc(num_el, el_size);

	if (arr_lib == NULL)
		printf("Lib calloc():\nNo memory allocation.\n");
	else
	{
		printf("Lib calloc():\nAllocated memory block: '");
		for (size_t i = 0; i < num_el; ++i)
		{
			if (strcmp(el_type, "char") == 0)
				printf("%c ", ((char *)arr_lib)[i]);
			else if (strcmp(el_type, "int") == 0)
				printf("%d ", ((int *)arr_lib)[i]);
			// Add more cases for other types as needed
		}
		printf("'\n");
	}

	if (arr_my == NULL)
		printf("My ft_calloc():\nNo memory allocation.\n");

	else
	{
		printf("My ft_calloc():\nAllocated memory block: '");
		for (size_t i = 0; i < num_el; ++i)
		{
			if (strcmp(el_type, "char") == 0)
				printf("%c ", ((char *)arr_lib)[i]);
			else if (strcmp(el_type, "int") == 0)
				printf("%d ", ((int *)arr_lib)[i]);
			// Add more cases for other types as needed
		}
		printf("'\n");
	}

	if (arr_lib != NULL && arr_my != NULL)
	{
		if (memcmp(arr_lib, arr_my, num_el * el_size) == 0)
			printf("--> OK!\n\n");
		else
			printf("--> ERROR!\n\n");
	}
	else
		printf("--> OK! (no memory allocation)\n\n");

	if (arr_lib != NULL)
		free(arr_lib);
	if (arr_my != NULL)
		free(arr_my);

	return (NULL);
}

void	test_isalnum(char ch)
{
	int	result_std = ft_isalnum(ch);
	int	result_ft = ft_isalnum(ch);

	printf("Character: %c\n", ch);
	printf("Lib isalnum(): %d\n", result_std);
	printf("My ft_isalnum(): %d\n", result_ft);

	if ((result_std == 0 && result_ft == 0)
		|| (result_std > 0 && result_ft > 0))
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");
}

void	test_isalpha(char ch)
{
	int	result_std = isalpha(ch);
	int	result_ft = ft_isalpha(ch);

	printf("Character: %c\n", ch);
	printf("Lib isalpha(): %d\n", result_std);
	printf("My ft_isalpha(): %d\n", result_ft);

	if ((result_std == 0 && result_ft == 0)
		|| (result_std > 0 && result_ft > 0))
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");
}

void	test_isascii(int ch)
{
	int	result_std = isascii(ch);
	int	result_ft = ft_isascii(ch);

	printf("Character: %c\n", ch);
	printf("Lib isascii(): %d\n", result_std != 0);
	printf("My ft_isascii(): %d\n", result_ft != 0);

	if ((result_std == 0 && result_ft == 0)
		|| (result_std > 0 && result_ft > 0))
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");
}

void	test_isdigit(char ch)
{
	int	result_std = isdigit(ch);
	int	result_ft = ft_isdigit(ch);

	printf("Character: %c\n", ch);
	printf("Lib isdigit(): %d\n", result_std != 0);
	printf("My ft_isdigit(): %d\n", result_ft != 0);

	if ((result_std == 0 && result_ft == 0)
		|| (result_std > 0 && result_ft > 0))
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");
}

void	test_isprint(char ch)
{
	int	result_std = isprint(ch);
	int	result_ft = ft_isprint(ch);

	printf("Character: %c\n", ch);
	printf("Lib isprint(): %d\n", result_std != 0);
	printf("My ft_isprint(): %d\n", result_ft != 0);

	if ((result_std == 0 && result_ft == 0)
		|| (result_std > 0 && result_ft > 0))
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");
}

////////////////
///// MAIN /////
////////////////

int	main(void)
{
	////////////////////
	// CORE FUNCTIONS //
	////////////////////

	printf("\n============================\n");
	printf("== TESTING CORE FUNCTIONS ==\n");
	printf("============================\n\n");

	////////////
	// ft_atoi()
	////////////

	char	int_num[100];
	int		lib_res;
	int		my_res;

	char test_cases[][100] =
	{
		"123",
		"-123",
		"	123",
		"123	",
		"   123   ",
		"   -123   ",
		"   +123   ",
		"",
		"abc-123",
		"  123abc",
		"2147483647",
		"-2147483648",
		"2147483648",
		"-2147483649"
	};

	printf("=======================\n");
	printf("== TESTING FT_ATOI() ==\n");
	printf("=======================\n\n");

	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); ++i)
	{
		strcpy(int_num, test_cases[i]);
		lib_res = atoi(int_num);
		my_res = ft_atoi(int_num);

		printf("Testing: '%s'\n", int_num);
		printf("Lib atoi(): %d\n", lib_res);
		printf("My ft_atoi(): %d\n", my_res);

		if (lib_res == my_res)
			printf("--> OK!\n\n");
		else
			printf("--> ERROR!\n\n");
	}

	/////////////
	// ft_bzero()
	/////////////

	char	chars[11] = "ABCDEFGHIJ";
	char	my_chars[11];
	strcpy(my_chars, chars);
	int		bytes_to_zero = 4;

	printf("========================\n");
	printf("== TESTING FT_BZERO() ==\n");
	printf("========================\n\n");

	printf("NOTE: Printing 'space' between elements for visualization.\n\n");

	printf("Setting %d block(s) of memory to NUL:\n\n", bytes_to_zero);

	printf("Lib bzero():\n");
	int i = 0;
	printf("Before: '");
	while (i < 10)
	{
		printf("%c ", chars[i]);
		i++;
	}
	printf("'\n");
	bzero(chars + 5, bytes_to_zero * sizeof(char));
	printf("After: '");
	i = 0;
	while (i < 10)
	{
		printf("%c ", chars[i]);
		i++;
	}
	printf("'\n\n");

	printf("My ft_bzero():\n");
	i = 0;
	printf("Before: '");
	while (i < 10)
	{
		printf("%c ", my_chars[i]);
		i++;
	}
	printf("'\n");
	ft_bzero(my_chars + 5, bytes_to_zero * sizeof(char));
	printf("After: '");
	i = 0;
	while (i < 10)
	{
		printf("%c ", my_chars[i]);
		i++;
	}
	printf("'\n\n");

	if (strcmp(chars, my_chars) == 0)
		printf("--> OK!\n\n");
	else
		printf("--> ERROR!\n\n");

	//////////////
	// ft_calloc()
	//////////////

	printf("=========================\n");
	printf("== TESTING FT_CALLOC() ==\n");
	printf("=========================\n\n");

	size_t number_m_blocks = 10;

	printf("NOTE: Printing 'space' between elements for visualization.\n\n");

	// Testing integers
	printf("Allocating memory for %zu int elements.\n", number_m_blocks);
	test_calloc(number_m_blocks, sizeof(int), "int");

	// Testing integers
	printf("Allocating memory for %zu char elements.\n", number_m_blocks);
	test_calloc(number_m_blocks, sizeof(char), "char");

	printf("*****\n");
	printf("NOTE: For the next two examples, the output for calloc()\n"
		"and ft_calloc() can differ, as both are valid:\n"
		"1) a return of NULL,\n"
		"or\n2) a valid pointer to 'zero-sized' block that can be\n"
		"passed to free().\n"
		"The memory comparison should be 'OK!', however.\n");
	printf("*****\n\n");

	// Testing zero elements
	printf("Allocating memory for 0 char elements.\n");
	test_calloc(0, sizeof(char), "char");

	// Testing zero size
	printf("Allocating memory for 10 char elements with 0 size.\n");
	test_calloc(number_m_blocks, 0, "char");

	// Testing overflow prevention
	number_m_blocks = SIZE_MAX;
	size_t size = SIZE_MAX;

	printf("Testing size_t overflow handling.\n");
	test_calloc(number_m_blocks, size, "char");

	///////////////
	// ft_isalnum()
	///////////////

	printf("==========================\n");
	printf("== TESTING FT_ISALNUM() ==\n");
	printf("==========================\n\n");

	printf("*****\n");
	printf("NOTE: Interestingly, the library function does \n"
		"not necessarily return '1', but rather any nonzero value.\n");
	printf("*****\n\n");

	test_isalnum('a'); // Alphanumeric, should return 1 (true)
	test_isalnum('5'); // Alphanumeric, should return 1 (true)
	test_isalnum('$'); // Not alphanumeric, should return 0 (false)

	///////////////
	// ft_isalpha()
	///////////////

	printf("==========================\n");
	printf("== TESTING FT_ISALPHA() ==\n");
	printf("==========================\n\n");

	printf("*****\n");
	printf("NOTE: Interestingly, the library function does \n"
		"not necessarily return '1', but rather any nonzero value.\n");
	printf("*****\n\n");

	test_isalpha('a');
	test_isalpha('5');
	test_isalpha('$');

	///////////////
	// ft_isascii()
	///////////////

	printf("==========================\n");
	printf("== TESTING FT_ISASCII() ==\n");
	printf("==========================\n\n");

	printf("*****\n");
	printf("NOTE: Interestingly, the library function does \n"
		"not necessarily return '1', but rather any nonzero value.\n");
	printf("*****\n\n");

	test_isascii('A');
	test_isascii(150); // Not ASCII, should return 0 (false)
	test_isascii('$');

	///////////////
	// ft_isdigit()
	///////////////

	printf("==========================\n");
	printf("== TESTING FT_ISDIGIT() ==\n");
	printf("==========================\n\n");

	test_isdigit('5');
	test_isdigit('A');
	test_isdigit('$');

	///////////////
	// ft_isprint()
	///////////////

	printf("==========================\n");
	printf("== FT_TESTING ISPRINT() ==\n");
	printf("==========================\n\n");

	test_isprint('A');
	test_isprint('\t'); // Not printable, should return 0 (false)
	test_isprint('$');

	return (0);
}
