# 0x0C. C - More malloc, free

This project explores advanced memory management in C, focusing on dynamic memory allocation and deallocation using `malloc`, `free`, and related functions.

## Learning Objectives

By the end of this project, you should be able to:

- Use `malloc` and `free` effectively
- Understand when and why to use `malloc`
- Use `calloc` and `realloc` from the standard library
- Implement custom memory allocation functions
- Detect and prevent memory leaks using tools like `valgrind`

## Project Tasks

### 0. malloc_checked
**File:** `0-malloc_checked.c`

A function that allocates memory using `malloc`.
- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- If `malloc` fails, the function causes normal process termination with status value of `98`

**Key Concept:** Safe memory allocation with automatic error handling through process termination.

---

### 1. string_nconcat
**File:** `1-string_nconcat.c`

A function that concatenates two strings.
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- Concatenates `s1` and the first `n` bytes of `s2`
- Returns pointer to newly allocated space containing the result
- Returns `NULL` on failure
- If `n` is greater than or equal to the length of `s2`, uses the entire `s2`
- Treats `NULL` as an empty string

**Key Concept:** Dynamic string manipulation with controlled concatenation and memory allocation.

---

### 2. _calloc
**File:** `2-calloc.c`

A function that allocates memory for an array, using `malloc`.
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- Allocates memory for an array of `nmemb` elements of `size` bytes each
- Returns a pointer to the allocated memory
- Memory is set to zero
- Returns `NULL` if `nmemb` or `size` is `0`
- Returns `NULL` if `malloc` fails

**Key Concept:** Custom implementation of `calloc` that allocates and initializes memory to zero.

---

### 3. array_range
**File:** `3-array_range.c`

A function that creates an array of integers.
- Prototype: `int *array_range(int min, int max);`
- Creates an array containing all values from `min` (included) to `max` (included)
- Values are ordered from `min` to `max`
- Returns pointer to the newly created array
- Returns `NULL` if `min > max`
- Returns `NULL` if `malloc` fails

**Key Concept:** Dynamic array creation with calculated size allocation.

---

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Testing

Each task includes a main file for testing:
- `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`

To test with valgrind (memory leak detection):
```bash
valgrind ./executable_name
```

## Resources

- `man malloc`
- `man free`
- `man calloc`
- `man realloc`
- `valgrind` documentation

## Author

**zolldic**
