*This project has been created as part of the 42 curriculum by tzammar.*

# ft_printf - Because ft_putstr isn't enough

## Description

**ft_printf** is a project at 42 that requires recoding the famous `printf` function from the standard C library.

The primary goal of this project is to learn how to use **variadic functions** in C—functions that can take a variable number of arguments. By implementing your own version of `printf`, you will gain a deeper understanding of the `stdarg.h` library, format specifiers, and the underlying mechanics of formatted output.

The function matches the prototype: `int ft_printf(const char *, ...);`

## Instructions

### Compilation
To compile the library, run the following command in the root of the repository:

```bash
make
```
This will generate the libftprintf.a library file.

### Usage
To use this library in your own projects:

Include the header file in your C source files:

```C
#include "ft_printf.h"
```
Compile your project with the library:

```Bash
cc -Wall -Wextra -Werror main.c  lftprintf.a -o my_program
```

## Features
**This implementation supports the following format conversions:**
* **%c:** Prints a single character.
* **%s:** Prints a string (as defined by the common C convention).
* **%p:** The void * pointer argument has to be printed in hexadecimal format.
* **%d:** Prints a decimal (base 10) number.
* **%i:** Prints an integer in base 10.
* **%u:** Prints an unsigned decimal (base 10) number.
* **%x:** Prints a number in hexadecimal (base 16) lowercase format.
* **%X:** Prints a number in hexadecimal (base 16) uppercase format.
* **%%:** Prints a percent sign.

## Resources
### References
* **Man7.org - Printf** - Manual page for the standard printf. https://man7.org/linux/man-pages/man3/printf.3.html
* **GeeksforGeeks - Variadic Functions** - Explanation of how to handle variable arguments in C. https://www.geeksforgeeks.org/c/variadic-functions-in-c/