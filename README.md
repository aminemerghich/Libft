*This project has been created as part of the 42 curriculum by amerghic*

# Libft

## Description

Libft is a project from the 42 curriculum. Its goal is to recreate a collection of standard C library functions and develop additional utility functions that can be reused in future C projects.

The project helps develop a deeper understanding of C programming, memory management, pointers, strings, and data manipulation.

The library is compiled into a static library named `libft.a`, which can be linked to other C programs.

## Library Contents

The library contains functions that reproduce or extend the behavior of standard C library functions.

### Character Classification and Conversion

These functions check character properties or convert between uppercase and lowercase letters.

- `ft_isalpha` — checks whether a character is an alphabetic letter.
- `ft_isdigit` — checks whether a character is a decimal digit.
- `ft_isalnum` — checks whether a character is alphanumeric.
- `ft_isascii` — checks whether a character belongs to the ASCII character set.
- `ft_isprint` — checks whether a character is printable.
- `ft_toupper` — converts a lowercase letter to uppercase.
- `ft_tolower` — converts an uppercase letter to lowercase.

### String Functions

These functions manipulate and inspect null-terminated strings.

- `ft_strlen` — calculates the length of a string.
- `ft_strchr` — locates the first occurrence of a character in a string.
- `ft_strrchr` — locates the last occurrence of a character in a string.
- `ft_strncmp` — compares two strings up to a specified number of characters.
- `ft_strlcpy` — copies a string into a destination buffer of a specified size.
- `ft_strlcat` — concatenates strings while respecting the destination buffer size.
- `ft_strnstr` — searches for a substring within a limited portion of a string.
- `ft_strdup` — allocates memory and creates a duplicate of a string.
- `ft_atoi` — converts the initial numeric portion of a string into an integer.

### Memory Functions

These functions operate on memory areas at the byte level.

- `ft_memset` — fills a memory area with a specified byte.
- `ft_bzero` — sets a memory area to zero.
- `ft_memcpy` — copies bytes between memory areas that do not overlap.
- `ft_memmove` — copies bytes safely when memory areas may overlap.
- `ft_memchr` — searches for a byte within a memory area.
- `ft_memcmp` — compares two memory areas byte by byte.
- `ft_calloc` — allocates memory for an array and initializes it to zero.

### Additional Functions

The library can also include utility functions required by the extended Libft part, such as linked-list operations and string-processing helpers, depending on the implemented scope.

> **Note:** Update this list to include only the functions present in your final library.

## Instructions

### Requirements

- A C compiler such as `cc` or `gcc`.
- `make`.
- The standard C development headers.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd <repository-directory>
```

Compile the library:

```bash
make
```

This generates the static library `libft.a`.

Other available Makefile commands:

```bash
make clean
make fclean
make re
```

- `make clean` removes the object files.
- `make fclean` removes the object files and the compiled library.
- `make re` cleans and recompiles the library.

### Using the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it with `libft.a`:

```bash
cc main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

Make sure `main.c` is your own source file and that `libft.a` and `libft.h` are available in the project directory or the appropriate include and library paths.

## Resources

The following resources were used or consulted to understand C programming and the behavior expected from standard library functions.

- **C library reference:** https://en.cppreference.com/w/c
- **GNU C Library documentation:** https://www.gnu.org/software/libc/manual/
- **C programming documentation:** https://devdocs.io/c/
- **42 school materials:** Libft subject and project requirements provided by 42.

### AI Usage

AI tools, including ChatGPT, were used as a learning aid during the project.

They were used to:
- Explain the behavior and expected purpose of standard C library functions.
- Help identify and understand programming errors.
- Discuss pointers, memory addresses, string manipulation, and memory operations.
- Review implementations and suggest test cases for edge cases.
- Explain compilation and Makefile usage.
- Assist with preparing this README.

The implementation, testing, and final validation of the library remain the responsibility of the student. Any AI-generated suggestions should be reviewed, understood, and verified against the 42 project requirements.

## Project Structure

A typical project structure is:

```text
libft/
├── Makefile
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_strlen.c
├── ft_memset.c
├── ft_memcpy.c
└── ...
```

The exact file list depends on the functions implemented in the project.

## License

This project was created for educational purposes as part of the 42 curriculum.

