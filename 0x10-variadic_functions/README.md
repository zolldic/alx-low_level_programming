# 0x10. C - Variadic Functions

This project explores variadic functions in C programming - functions that can accept a variable number of arguments. Understanding variadic functions is crucial for building flexible and reusable code that can handle different numbers of parameters without creating multiple function versions.

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without external help:

- What are variadic functions and why they are useful
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

## Project Structure

### Header File
- **`variadic_functions.h`** - Contains all function prototypes and necessary includes

### Mandatory Tasks

All functions must follow the Betty style and meet specific compilation requirements using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Project Tasks

### 0. Beauty is variable, ugliness is constant
**File:** `0-sum_them_all.c`  
**Prototype:** `int sum_them_all(const unsigned int n, ...);`

Write a function that returns the sum of all its parameters.

**Concept:** This introduces the basic use of variadic functions. The function accepts a count of arguments followed by the actual arguments to sum. If `n == 0`, return `0`.

**Example:**
```c
sum = sum_them_all(2, 98, 1024);  // Returns: 1122
sum = sum_them_all(4, 98, 1024, 402, -1024);  // Returns: 500
```

---

### 1. To be is to be the value of a variable
**File:** `1-print_numbers.c`  
**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`

Write a function that prints numbers, followed by a new line.

**Concept:** This task builds on variadic functions by adding a separator string between printed values. The function demonstrates handling string parameters alongside variadic integers. If `separator` is `NULL`, don't print it.

**Example:**
```c
print_numbers(", ", 4, 0, 98, -1024, 402);
// Output: 0, 98, -1024, 402
```

---

### 2. One woman's constant is another woman's variable
**File:** `2-print_strings.c`  
**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`

Write a function that prints strings, followed by a new line.

**Concept:** Similar to printing numbers, but handles string pointers. This requires careful NULL checking - if a string is `NULL`, print `(nil)` instead. If separator is `NULL`, don't print it.

**Example:**
```c
print_strings(", ", 2, "Jay", "Django");
// Output: Jay, Django
```

---

### 3. To be is a to be the value of a variable
**File:** `3-print_all.c`  
**Prototype:** `void print_all(const char * const format, ...);`

Write a function that prints anything based on a format string.

**Concept:** This advanced task demonstrates format-based variadic functions similar to `printf`. The format string specifies the type of each argument:
- `c`: char
- `i`: integer
- `f`: float
- `s`: char * (print `(nil)` if the string is NULL)
- Any other character is ignored

**Constraints:**
- Not allowed to use: `for`, `goto`, ternary operator, `else`, `do ... while`
- Maximum 2 `while` loops
- Maximum 2 `if` statements
- Maximum 9 variables
- You are allowed to use `printf`

**Example:**
```c
print_all("ceis", 'B', 3, "stSchool");
// Output: B, 3, stSchool
```

---

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <function_file.c> -o <output>
```

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a
```

## Resources

**Read or watch:**
- [stdarg.h](https://en.cppreference.com/w/c/variadic)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.geeksforgeeks.org/const-qualifier-in-c/)
- Variadic Functions in C Programming

**Man pages:**
- `man stdarg`

## Key Concepts Summary

### Variadic Functions
Functions that accept a variable number of arguments using ellipsis (`...`) in their declaration. They require:
1. At least one fixed parameter before the ellipsis
2. Use of macros from `<stdarg.h>`: `va_list`, `va_start`, `va_arg`, `va_end`

### The `const` Type Qualifier
The `const` keyword prevents modification of variables, making code safer and expressing intent. In function parameters:
- `const unsigned int n` - cannot modify `n` inside the function
- `const char * const format` - neither the pointer nor the data it points to can be modified

### Important Macros
- **`va_list`** - Type to hold information about variable arguments
- **`va_start(ap, last_fixed)`** - Initialize the `va_list` to retrieve arguments
- **`va_arg(ap, type)`** - Retrieve the next argument of specified type
- **`va_end(ap)`** - Clean up the `va_list` when done

## Author

**@zolldic**

---

## Note

This project is part of the ALX Software Engineering program. The focus is on understanding variadic functions and proper memory handling in C. Remember: the goal is to learn and understand, not just to complete tasks. Take time to experiment with the concepts and truly grasp how variadic functions work under the hood.
