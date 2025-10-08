# 0x06. C - More pointers, arrays and strings

## Description
This project is part of the **ALX SE Foundations** curriculum.
It continues exploring **pointers**, **arrays**, and **strings** in C programming.
By completing the tasks, you will strengthen your understanding of how data is stored and manipulated in memory, and how to implement common string and array operations without relying on the standard library.

---

## Learning Objectives
At the end of this project, you should be able to explain (without Google):

- What pointers are and how to use them
- What arrays are and how to use them
- The differences between pointers and arrays
- How to use and manipulate strings
- The scope of variables

---

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS using `gcc` with flags
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
* All files should end with a new line
* A `README.md` file is mandatory at the root of the project folder
* Code must follow **Betty style** (`betty-style.pl` and `bet-doc.pl`)
* No use of global variables
* No more than 5 functions per file
* Standard library functions (e.g., `printf`, `puts`) are forbidden
* You may use `_putchar` (provided)
* Function prototypes should be in `main.h`

---

## Tasks

| File                 | Description                                        |
| -------------------- | -------------------------------------------------- |
| `0-strcat.c`         | Concatenate two strings                            |
| `1-strncat.c`        | Concatenate two strings using at most `n` bytes    |
| `2-strncpy.c`        | Copy a string                                      |
| `3-strcmp.c`         | Compare two strings                                |
| `4-rev_array.c`      | Reverse an array of integers                       |
| `5-string_toupper.c` | Convert lowercase letters to uppercase             |
| `6-cap_string.c`     | Capitalize words in a string                       |
| `7-leet.c`           | Encode a string into 1337                          |

---

## Compilation Example

To compile a task (e.g., `0-strcat.c` with its corresponding `0-main.c`):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
```

Run:

```bash
./0-strcat
```

---

## Resources

- [C Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Data types in C](https://www.geeksforgeeks.org/data-types-in-c/)

---
