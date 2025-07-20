# 0x05. C - Pointers, Arrays, and Strings

## Project Overview
This project aims to deepen understanding of pointers, arrays, and strings in the C programming language. It consists of several tasks, each focusing on different aspects of these fundamental concepts. By completing these tasks, you will learn how to manipulate memory addresses, work with arrays, and handle string operations in C.

### Key Objectives
1. **Understand Pointers**: Learn what pointers are and how to use them to manipulate data.
2. **Work with Arrays**: Learn how to declare, initialize, and use arrays.
3. **Understand Strings**: Learn how to handle and manipulate strings in C.
4. **Scope of Variables**: Understand the scope and lifetime of variables in C.
5. **Differences Between Pointers and Arrays**: Learn the distinctions and similarities between pointers and arrays.

### Resources
- **Read/Watch**:
  - [C - Arrays](https://savanna.alxafrica.com/rltoken/PVi2XMuApOK3jfhsoqsyXw)
  - [C - Pointers](https://savanna.alxafrica.com/rltoken/oyHybzYBeFiLUMALpb_usA)
  - [C - Strings](https://savanna.alxafrica.com/rltoken/sUeh9qDyW9pePOfJIpx_Bw)
  - [Memory Layout](https://savanna.alxafrica.com/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ)

- **Additional Resource**:
  - [Arrays & Pointers in C Programming Explained](https://savanna.alxafrica.com/rltoken/fAbvIu4ESCb1JcE3EU1Kmw)

## Requirements
### General
- **Editors**: Allowed editors are `vi`, `vim`, and `emacs`.
- **Compiler**: Files will be compiled on Ubuntu 20.04 LTS using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **File Format**: All files must end with a new line.
- **README**: A `README.md` file at the root of the project folder is mandatory.
- **Betty Style**: Code must adhere to the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables**: Not allowed.
- **Functions**: No more than 5 functions per file.
- **Standard Library**: Use of standard library functions like `printf`, `puts`, etc., is forbidden. Use `_putchar` instead.
- **Header File**: Prototypes of all functions and `_putchar` must be included in the header file `main.h`.

## Task Breakdown
### Mandatory Tasks
1. **0-reset_to_98.c**: Write a function that takes a pointer to an `int` and updates the value it points to 98.
   - Prototype: `void reset_to_98(int *n);`
   
2. **1-swap.c**: Write a function that swaps the values of two integers.
   - Prototype: `void swap_int(int *a, int *b);`
   
3. **2-strlen.c**: Write a function that returns the length of a string.
   - Prototype: `int _strlen(char *s);`

4. **3-puts.c**: Write a function that prints a string, followed by a new line, to `stdout`.
   - Prototype: `void _puts(char *str);`

5. **4-print_rev.c**: Write a function that prints a string, in reverse, followed by a new line.
   - Prototype: `void print_rev(char *s);`

6. **5-rev_string.c**: Write a function that reverses a string.
   - Prototype: `void rev_string(char *s);`

7. **6-puts2.c**: Write a function that prints every other character of a string, starting with the first character.
   - Prototype: `void puts2(char *str);`

8. **7-puts_half.c**: Write a function that prints half of a string, followed by a new line.
   - Prototype: `void puts_half(char *str);`

9. **8-print_array.c**: Write a function that prints `n` elements of an array of integers.
   - Prototype: `void print_array(int *a, int n);`

10. **9-strcpy.c**: Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
    - Prototype: `char *_strcpy(char *dest, char *src);`

### Advanced Tasks
11. **100-atoi.c**: Write a function that converts a string to an integer.
    - Prototype: `int _atoi(char *s);`

12. **101-keygen.c**: Create a program that generates random valid passwords for the program `101-crackme`.

## Setting Up the Environment
1. Ensure you have Ubuntu 20.04 LTS installed or accessible.
2. Install the required tools (`gcc`, `vim`, `emacs`, etc.) if not already present.
3. Clone the project repository and navigate to the project directory.

## Compilation
To compile the code, use the following command format for each task:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <task_file.c> -o <output_name>
```

Example for task 0:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
```

## Testing
Each task comes with a `main.c` file for testing. For example, to test task 0:
```bash
./0-98
```

## Submission
- Push your code to the GitHub repository.
- Ensure all files are correctly named and located in the `0x05-pointers_arrays_strings` directory.
- Verify that your code adheres to all requirements before submission.

## Copyright & Plagiarism
- You are expected to come up with solutions independently.
- Copying someone else's work is strictly forbidden and will result in removal from the program.
- Do not publish any content of this project. Any form of plagiarism is unacceptable.
