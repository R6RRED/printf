*This project has been created as part of the 42 curriculum by amel-bad.*

# ft_printf

## Description

The **ft_printf** project is a recreation of the standard C library function `printf()`.

The goal is to understand variadic functions in C and learn how to handle a variable number of arguments while formatting and printing different data types.

The project implements a custom `ft_printf()` function capable of processing a format string, identifying conversion specifiers, retrieving the corresponding arguments, and displaying the formatted output.

### Supported conversions

| Specifier | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a signed decimal integer. |
| `%i` | Prints a signed integer. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints an unsigned hexadecimal number (lowercase). |
| `%X` | Prints an unsigned hexadecimal number (uppercase). |
| `%%` | Prints a percent sign. |

## Instructions

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd ft_printf
```

Compile the library using:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

### Available Makefile rules

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Recompiles the project from scratch. |

### Usage

Include the header file in your C program:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -o program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    int number = 42;

    ft_printf("Hello, world!\n");
    ft_printf("Number: %d\n", number);
    ft_printf("Hexadecimal: %x\n", number);
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "42 School");

    return (0);
}
```

Run the program:

```bash
./program
```

## Algorithm and Data Structures

### 1. Algorithm

The implementation follows a sequential parsing algorithm.

The `ft_printf()` function reads the format string character by character and determines whether each character is a regular character or a conversion specifier.

The algorithm works as follows:

1. Initialize a `va_list` to access the variable arguments.
2. Iterate through the format string.
3. If the current character is not `%`, print it directly and increment the character counter.
4. If `%` is encountered, examine the following character to identify the conversion specifier.
5. Retrieve the corresponding argument using `va_arg()`, with the appropriate data type.
6. Call the helper function responsible for converting and printing that type.
7. Add the number of printed characters to the total counter.
8. Continue until the end of the format string.
9. Call `va_end()` to finish processing the variadic arguments.
10. Return the total number of characters printed.

### 2. Data Structures

The main data structure used in this project is `va_list`.

**va_list**

`va_list` is used to access the additional arguments passed to a variadic function.

It allows the program to retrieve arguments one at a time using `va_arg()`.

The following macros are used:

- `va_start()`: Initializes the argument list.
- `va_arg()`: Retrieves the next argument with the specified type.
- `va_end()`: Ends the use of the argument list.

No complex data structures, such as linked lists or arrays, are required for the main parsing algorithm.

### 3. Helper Functions and Conversion Logic

Each conversion is handled by a dedicated helper function. This separates the parsing logic from the actual printing and conversion operations.

- **Characters and strings:** Printed using character and string output functions.
- **Signed integers:** Negative numbers are handled separately from positive numbers. The number is converted into decimal digits before being printed.
- **Unsigned integers:** Printed without a sign, using unsigned integer arithmetic.
- **Hexadecimal numbers:** Converted using base 16 and a character lookup table containing hexadecimal digits.
- **Pointers:** The pointer address is represented as an unsigned integer and printed in hexadecimal, with the `0x` prefix.
- **Percent sign:** Prints a literal `%` without retrieving an additional argument.

### 4. Why This Algorithm and Data Structure?

A sequential parsing algorithm is appropriate because the format string is already ordered and only needs to be processed once.

Its main advantages are:

- **Simplicity:** Each character is examined sequentially.
- **Efficiency:** The format string is traversed in a single pass, giving O(n) parsing time, where n is the length of the format string, excluding the work required to print and convert the arguments.
- **Modularity:** Each conversion is handled independently, making the code easier to understand, debug, and maintain.
- **Memory efficiency:** The implementation does not require allocating additional memory for the format string or storing all arguments in a separate data structure.

Using `va_list` is essential because the number and types of additional arguments are determined by the format string at runtime.

## Resources

The following resources were useful for understanding the concepts behind this project:

- [Linux Manual – printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html) — Reference for the standard `printf()` function and its conversion specifiers.
- [Linux Manual – stdarg(3)](https://man7.org/linux/man-pages/man3/stdarg.3.html) — Documentation about variadic functions and argument handling.
- [cppreference – Variadic Arguments](https://en.cppreference.com/w/c/variadic) — Explanation of `va_list` and the variadic argument macros.
- [C Programming Language – Integer Types](https://en.cppreference.com/w/c/types/integer) — Reference for integer types and their properties.
- 42 School subject PDF — Official project requirements and restrictions.

### AI Usage

AI tools were used as learning and development assistance throughout the project.

Their use included:

- **Concept explanations:** Understanding variadic functions, `va_list`, `va_start`, `va_arg`, and `va_end`.
- **Algorithm design:** Understanding how to parse a format string and organize the conversion functions.
- **Debugging:** Investigating compilation errors, linker errors, incorrect output, and edge cases.
- **Code review:** Checking implementation logic, identifying potential issues, and understanding coding mistakes.
- **Documentation:** Assistance in organizing and writing this README file.

AI was used as a supplementary learning and debugging tool. The implementation, recoding, testing, and final validation of the project remain the responsibility of the student.

