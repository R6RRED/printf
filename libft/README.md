*This project has been created as part of the 42 curriculum by amel-bad.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate several standard C library functions and implement additional utility functions.

It provides reusable functions for:
- Character checking and conversion.
- String manipulation.
- Memory manipulation.
- Conversion between data types.
- Linked list manipulation.

The library helps develop a better understanding of C, pointers, memory allocation, and data structures.

## Instructions

### Compilation

Clone the repository:

```bash
git clone <repository_url>
cd libft
```

Compile the library:

```bash
make
```

Compile the bonus functions:

```bash
make bonus
```

Clean object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

### Usage

Include the header in your C program:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

## Library Functions

### Character Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to ASCII. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a character to uppercase. |
| `ft_tolower` | Converts a character to lowercase. |

### String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculates string length. |
| `ft_strchr` | Finds the first occurrence of a character. |
| `ft_strrchr` | Finds the last occurrence of a character. |
| `ft_strncmp` | Compares two strings. |
| `ft_strlcpy` | Copies a string with size limitation. |
| `ft_strlcat` | Concatenates strings with size limitation. |
| `ft_strnstr` | Searches for a substring. |
| `ft_strdup` | Duplicates a string. |
| `ft_substr` | Extracts a substring. |
| `ft_strjoin` | Joins two strings. |
| `ft_strtrim` | Removes specified characters from both ends. |
| `ft_split` | Splits a string using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string. |

### Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fills memory with a specified byte. |
| `ft_bzero` | Sets memory to zero. |
| `ft_memcpy` | Copies memory. |
| `ft_memmove` | Copies memory while handling overlapping regions. |
| `ft_memchr` | Searches for a byte in memory. |
| `ft_memcmp` | Compares memory areas. |
| `ft_calloc` | Allocates and initializes memory to zero. |

### Conversion and Output Functions

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Linked List Functions (Bonus)

The bonus part implements a singly linked list using the `t_list` structure.

Each node contains:
- `content`: Pointer to the node's data.
- `next`: Pointer to the next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning. |
| `ft_lstsize` | Counts the number of nodes. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end. |
| `ft_lstdelone` | Deletes one node. |
| `ft_lstclear` | Deletes an entire list. |
| `ft_lstiter` | Applies a function to every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node. |

## Resources

### References
- [C Standard Library - cppreference](https://en.cppreference.com/w/c/header)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [42 School](https://42.fr/)

### AI Usage

AI tools were used as learning and support resources throughout the project.

They were used for:
- Understanding C concepts, pointers, memory allocation, and linked lists.
- Clarifying the behavior of standard C library functions.
- Explaining compiler errors and debugging issues.
- Reviewing implementations and identifying potential edge cases.
- Understanding Makefile rules and project requirements.

All implementations were written, tested, and reviewed by the student. AI was used as a supplementary learning tool, not as a replacement for understanding the code.
