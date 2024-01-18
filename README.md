# 42_libft
<p align="center">
    <img src="https://github.com/alx-sch/42_libft/assets/134595144/bce87494-3c97-4028-ab66-83a48190603d" alt="libft" />
</p>

A custom implementation of key standard C library and other useful functions. This library serves as a toolkit for subsequent projects by providing a collection of essential functions commonly used in C programming.

All functions have been tested via [Francinette](https://github.com/xicodomingues/francinette) and successfully passed `francinette --strict`.  
Every function file includes a testing main at the end.

## Features

- **Memory Management:** Efficient memory allocation and deallocation functions.
- **String Manipulation:** Custom implementations of standard string-handling functions.
- **Character Handling:** Functions for character classification and conversion.
- **Linked Lists:** A set of functions for creating and manipulating linked lists.
- **Additional Utilities:** Various helper functions for general-purpose use.

## Overview

Functions to check and manipulate characters:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

Functions to check and manipulate strings:
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri
  
Functions to manipulate memory:
- ft_calloc
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strdup
  
Functions for numbers:
- ft_atoi
- ft_itoa

Functions to write to a file descriptor
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

Functions for list manipulation:
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Testing libft (for selected functions)

Testing numerous core functions (Part 1), comparing their functionality and behavior with the corresponding native functions.

1. Place the `test_libft.c` file in the same directory as your header file (`libft.h`) and library (`libft.a`), like [this](https://github.com/alx-sch/42_libft/tree/main/testing_libft).

2. Compile the program using the following command: `cc -o testing_libft test_libft.c ./libft.a`

3. Execute the compiled program: `./testing_libft`

## How to use libft 
To include libft functions in other projects, follow these steps:
- Make sure libft.h and libft.a are accessible from your project. The simplest approach is to copy these files into your project's directory (the commands below assume this).
- Include the libft header file at the top of your source code (where you want to use libft functions): `#include "libft.h`.
- Link your project with libft.a during compilation using the following command: `cc -o your_executable your_file.c  -L. -lft`.
    - The `-L` flag specifies the directory where the linker should look for libraries (in this case, the current directory).  
    - The `-lft` flag completes the library search path, instructing the linker to use a library file named libft.a (excluding the initial 'lib').
- Now you can use any of the functions provided by libft in your source code.

## Acknowledgement
Function descriptions are mostly based on the ones found in the [Gitbook](https://42-cursus.gitbook.io/guide/rank-00/libft) by [Laura](https://github.com/TheBrisly) and [Simon](https://github.com/Laendrun).

The project badge used is retrieved from [this repo](https://github.com/ayogun/42-project-badges) by Ali Ogun.
