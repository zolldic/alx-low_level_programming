# 0x07. C - Even more pointers, arrays and strings

This project contains C programs that demonstrate advanced concepts of pointers, arrays, and string manipulation. The programs implement custom versions of standard C library functions and additional utility functions.

## Files

### Mandatory Tasks

- **0-memset.c**
  - Function: `char *_memset(char *s, char b, unsigned int n)`
  - Fills memory with a constant byte
  - Returns a pointer to the memory area `s`

- **1-memcpy.c**
  - Function: `char *_memcpy(char *dest, char *src, unsigned int n)`
  - Copies `n` bytes from memory area `src` to memory area `dest`
  - Returns a pointer to `dest`

- **2-strchr.c**
  - Function: `char *_strchr(char *s, char c)`
  - Locates the first occurrence of character `c` in string `s`
  - Returns a pointer to the first occurrence or NULL if not found

- **3-strspn.c**
  - Function: `unsigned int _strspn(char *s, char *accept)`
  - Gets the length of a prefix substring
  - Returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`

- **4-strpbrk.c**
  - Function: `char *_strpbrk(char *s, char *accept)`
  - Searches a string for any of a set of bytes
  - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or NULL if no match is found

- **5-strstr.c**
  - Function: `char *_strstr(char *haystack, char *needle)`
  - Locates a substring
  - Returns a pointer to the beginning of the located substring, or NULL if not found

- **7-print_chessboard.c**
  - Function: `void print_chessboard(char (*a)[8])`
  - Prints an 8x8 chessboard representation

- **8-print_diagsums.c**
  - Function: `void print_diagsums(int *a, int size)`
  - Prints the sum of the two diagonals of a square matrix of integers

### Header File

- **main.h**
  - Contains all function prototypes used in this project

## Compilation

All files are compiled on Ubuntu 20.04 LTS using gcc with the following options:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```
