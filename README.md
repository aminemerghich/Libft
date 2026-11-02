# 📚 Libft

![Library](assets/library.png)

## About the Project

**Libft** is a custom C library developed as part of the 42 curriculum.

The main objective of this project is to recreate several standard C library functions from scratch, while developing a deeper understanding of how C works internally.

It provides a collection of reusable functions for string manipulation, memory management, character handling, and linked list operations.

The project focuses on writing clean, reliable, and well-structured C code while respecting the constraints of the 42 coding standards.

---

## Function Categories

The library is organized into several categories:

### 1. Character Checking and Conversion
Functions used to analyze and manipulate individual characters.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### 2. String Manipulation
Functions designed to manipulate, compare, search, and process strings.

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`

### 3. Memory Manipulation
Functions that operate directly on memory blocks.

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### 4. Conversion Functions
Functions responsible for converting data between different representations.

- `ft_atoi`
- `ft_itoa`

### 5. Additional Utility Functions
Useful functions that simplify common programming operations.

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`
- `ft_strmapi`
- `ft_striteri`

### 6. Linked List Functions

Implementation of basic linked list operations using structures and pointers.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## What I Learned

Beyond implementing library functions, this project helped me develop a stronger understanding of fundamental C programming concepts.

### Memory Management
I learned how to manage dynamically allocated memory using `malloc` and `free`, understand memory ownership, and avoid memory leaks.

### Pointers
I developed a better understanding of pointers, memory addresses, pointer arithmetic, and how pointers are used to manipulate data efficiently.

### Linked Lists
I learned the general concept of linked lists, how nodes are connected through pointers, and how to create, traverse, modify, and free linked list structures.

### Low-Level Programming
Reimplementing standard library functions helped me understand what happens behind the scenes and how common operations work at a lower level.

---

## Compilation

To compile the library, run:

```bash
make
```

This generates the `libft.a` static library.

To use it in a C project:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc main.c -L. -lft -I.
```

---

## Project Information

**Project:** Libft

**Author:** ammergy

**Education:** 3rd Year Computer Science Student 


---

*This project represents an important step in my journey as a computer science student, strengthening my understanding of C, memory management, pointers, and data structures.*

**Built with C, curiosity, and determination.**
