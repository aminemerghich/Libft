*This project has been created as part of the 42 curriculum by <amerghic>.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to recreate standard C library functions and build a reusable library for future C projects.

The library focuses on character manipulation, string operations, memory management, and data processing.

## Instructions

### Compilation

Compile the library using:

```bash
make
```

This creates the static library `libft.a`.

Available commands:

- `make clean`: removes object files.
- `make fclean`: removes object files and `libft.a`.
- `make re`: recompiles the library.

### Usage

Include the header in your C file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run it:

```bash
./program
```

## Library Contents

The library reproduces standard C functions in the following categories:

- **Character functions:** character classification and conversion.
- **String functions:** string length, comparison, copying, concatenation, and searching.
- **Memory functions:** memory initialization, copying, searching, and comparison.
- **Conversion and allocation:** string-to-integer conversion, memory allocation, and string duplication.
- **Additional functions:** utility functions and bonus linked-list operations, if implemented.

See `libft.h` and the source files for the complete list of functions.

## Resources

- [C reference — cppreference](https://en.cppreference.com/w/c)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- 42 Libft project subject.

## License

This project was created for educational purposes as part of the 42 curriculum.

