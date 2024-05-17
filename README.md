# 42_libft
<p align="center">
    <img src="https://github.com/alx-sch/42_libft/assets/134595144/bce87494-3c97-4028-ab66-83a48190603d" alt="libft_badge.png" />
</p>

A custom implementation of key standard C library and other useful functions. This library serves as a toolkit for subsequent projects by providing a collection of essential functions commonly used in C programming. Bonus included.

All functions have been tested using [Francinette](https://github.com/xicodomingues/francinette) and successfully passed `francinette --strict`.  
Each function file includes a testing main at the end.

## Features

- **Memory Management:** Efficient memory allocation and deallocation functions.
- **String Manipulation:** Custom implementations of string-handling functions.
- **Linked Lists:** A set of functions for creating and manipulating linked lists.
- **Continuous Updates**: This repository is a work in progress and will be regularly updated with improvements and additional functionalities.

## Updates
For the most up-to-date version, please check the [updated libft](https://github.com/alx-sch/42_libft/tree/main/updated_libft).    
Functions added:  
- A nifty compilation progress bar that shows the progress of the build process.
- [ft_printf()](https://github.com/alx-sch/42_printf)
- [get_next_line()](https://github.com/alx-sch/42_get_next_line)
- ft_isbinary()
- ft_atoi_base()
- ft_strcmp()

## Testing libft (for selected functions)

Test the functionality and behavior of numerous core functions (Part 1) by comparing them with the corresponding native functions.

1. Place the `test_libft.c` file in the same directory as your header file (libft.h) and library (libft.a), as shown [here](https://github.com/alx-sch/42_libft/tree/main/testing_libft).
2. Compile the program using the following command: `cc -o testing_libft test_libft.c ./libft.a`
3. Execute the compiled program: `./testing_libft`

## Updating Libft
Adding new functions to libft is an efficient way to save time, minimize redundancies, and maintain code coherence. Follow these steps for a seamless update:  

#### **1. Makefile:** 
- In your Makefile, remember to explicitly list any new source files. Unfortunately, due to [42's Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), wildcards cannot be utilized for this purpose.
- If your new function supports flags, make sure to add default values and to update the compilation rule for object files. For example: 
    ```
    BUFFER_SIZE ?= 42
    FD_SIZE ?= 1024

    %.o: %.c
	    $(CC) $(CFLAGS) -D BUFFER_SIZE=$(BUFFER_SIZE) -D FD_SIZE=$(FD_SIZE) -c $< -o $@
    ```
#### **2. libft.h:** 
- Include any new package dependencies (e.g. `# include <stdarg.h>`).
- Add prototypes for the new functions to be included. Also, include any utility functions not encapsulated within the source file of the parent function.

#### **3. C Files:**  
- Update the header inclusion in each new source file (`#include "libft.h"`)
- Add the new source files to the root directory of libft.

Et voilà! After following these steps, a freshly compiled libft.a will now incorporate the newly added functions.

## Using Libft (General Info)
To use libft functions in other projects, follow these steps:
- **Ensure Accessibility:** Make sure libft.h and libft.a are accessible from your project. You can achieve this by copying these files into your project's directory.
- **Include Header File:** To utilize libft functions in your source code, include the libft header file by adding `#include "libft.h"` at the beginning of your source file.
- **Linking:** During compilation, link your project with libft.a using the appropriate linker flags. You can either specify the library directory and name explicitly or use the `-lft` flag:
	- `cc your_file.c libft.a -o your_program` or
	- `cc your_file.c -L. -lft -o your_program`
		- The `-L` flag specifies the directory where the linker should look for libraries (in this case, the current directory).  
   		- The `-lft` flag completes the library search path, instructing the linker to use a library file named libft.a (as the initial 'lib' is excluded, the library name to use in the flag is 'ft').
- **Override Macros:** Macros are "baked into" the implementation of respective functions during the compilation of libft.a. If necessary, override default macro values during compilation, such as BUFFER_SIZE in get_next_line(), e.g.: `make BUFFER_SIZE=999`.

Now you can use any of the functions provided by libft in your source code.

## Integrating Libft into a Project
You can incorporate the ['updated libft'](https://github.com/alx-sch/42_libft/tree/main/updated_libft) into your project in an elegant way by calling the libft Makefile through your project Makefile and then using libft.a for the project's compilation. Such a project structure could look like this:
```css
project_root/
│
├── lib/
│   └── libft/
│       ├── Makefile
│       ├── libft.h
│       ├── ft_libft_1.c
│       ├── ft_libft_2.c
│   	└── ..
│ 
├── src/  
│   ├── project_source_1.c
│   └── ...
│ 
├── .../
│ 
└── Makefile
```
The libft Makefile generates object files and the 'libft.a' in the same folder. It also implements a progress bar during compilation and tracks dependencies to ensure that recompilation occurs only when source files or the header file are changed.

For a practical demonstration, feel free to refer to my [fdf project](https://github.com/alx-sch/42_fdf). 

## Acknowledgement
- The function descriptions are mostly based on those found in [this Gitbook](https://42-cursus.gitbook.io/guide/rank-00/libft) by [Laura](https://github.com/TheBrisly) and [Simon](https://github.com/Laendrun).
- The project badge used is retrieved from [this repo](https://github.com/ayogun/42-project-badges) by Ali Ogun.
