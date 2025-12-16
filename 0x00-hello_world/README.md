# 0x00. C - Hello, World

This is the very first project in the C programming language track of the ALX Software Engineering curriculum. It serves as an introduction to the C language, the compilation process, and basic shell scripting for compiling C code. The project covers fundamental concepts that are essential for all subsequent low-level programming projects.

## Learning Objectives
Upon completion of this project, you should be able to explain and use the following concepts:
*   What are the four main steps in the compilation process (Preprocessing, Compilation, Assembly, Linking).
*   What happens at each step of the compilation process.
*   How to use gcc to compile C code.
*   The purpose of the -o, -c, -S, and -E gcc flags.
*   What are header files and their purpose.
*   What is a main function and its role.
*   How to write basic C programs that print output to the standard output and standard error.
*   The purpose and usage of the `puts` and `printf` functions.
*   The importance of the Betty coding and documentation style.

## Project Structure
This project contains several C source files and shell scripts, each demonstrating specific aspects of the C compilation process or basic C programming concepts.
*   **`0-preprocessor`**: Shell script for C preprocessing.
*   **`1-compiler`**: Shell script for C compilation without linking.
*   **`2-assembler`**: Shell script for C assembly generation.
*   **`3-name`**: Shell script for compiling and naming an executable.
*   **`4-puts.c`**: C program demonstrating `puts` function.
*   **`5-printf.c`**: C program demonstrating `printf` function.
*   **`6-size.c`**: C program to print sizes of data types.
*   **`100-intel`**: Shell script for Intel syntax assembly generation (advanced).
*   **`101-quote.c`**: C program printing to standard error (advanced).

## Project Tasks

### 0. Preprocessor
*   **File**: `0-preprocessor`
*   **Prototype**: `#!/bin/bash`
*   **Description**: Write a shell script that runs a C file through the preprocessor and saves the result into another file. The C file name will be stored in the environment variable `$CFILE`. The output file should be named `c`.
*   **Concept**: Understanding the first stage of the compilation process, where macros are expanded, comments are removed, and header files are included.

### 1. Compiler
*   **File**: `1-compiler`
*   **Prototype**: `#!/bin/bash`
*   **Description**: Write a shell script that compiles a C file but does not link it. The C file name will be stored in the environment variable `$CFILE`. The output filename should be the same as the C file, but with the extension `.o` instead of `.c` (e.g., `main.c` would output `main.o`).
*   **Concept**: Learning how to compile source code into object files without creating a final executable, demonstrating the `-c` flag of `gcc`.

### 2. Assembler
*   **File**: `2-assembler`
*   **Prototype**: `#!/bin/bash`
*   **Description**: Write a shell script that generates the assembly code of a C file and saves it in an output file. The C file name will be stored in the environment variable `$CFILE`. The output filename should be the same as the C file, but with the extension `.s` instead of `.c` (e.g., `main.c` would output `main.s`).
*   **Concept**: Exploring the assembly stage of compilation, where compiled code is translated into human-readable assembly instructions, using the `-S` flag of `gcc`.

### 3. Name
*   **File**: `3-name`
*   **Prototype**: `#!/bin/bash`
*   **Description**: Write a shell script that compiles a C file and creates an executable named `cisfun`. The C file name will be stored in the environment variable `$CFILE`.
*   **Concept**: Understanding the complete compilation and linking process to create an executable file with a specified name using the `-o` flag of `gcc`.

### 4. Hello, puts
*   **File**: `4-puts.c`
*   **Prototype**: `int main(void)`
*   **Description**: Write a C program that prints the string "Programming is like building a multilingual puzzle", followed by a new line. You must use the `puts` function. You are not allowed to use `printf`. Your program should return `0`.
*   **Concept**: Introduction to basic C programming and outputting strings to standard output using the `puts` function.

### 5. Hello, printf
*   **File**: `5-printf.c`
*   **Prototype**: `int main(void)`
*   **Description**: Write a C program that prints the string "with proper grammar, but the outcome is a piece of art,", followed by a new line. You must use the `printf` function. You are not allowed to use `puts`. Your program should return `0`.
*   **Concept**: Further practice with basic C programming, specifically using the `printf` function for formatted output to standard output.

### 6. Size is not grandeur, and territory does not make a nation
*   **File**: `6-size.c`
*   **Prototype**: `int main(void)`
*   **Description**: Write a C program that prints the size of various data types on the computer it is compiled and run on. The output should list the size in bytes for `char`, `int`, `long int`, `long long int`, and `float`.
*   **Concept**: Understanding data types in C and how to determine their sizes in memory using the `sizeof` operator, which is crucial for low-level programming.

### 7. Intel (Advanced)
*   **File**: `100-intel`
*   **Prototype**: `#!/bin/bash`
*   **Description**: Write a script that generates the assembly code (Intel syntax) of a C file and saves it in an output file. The C file name will be stored in the variable `$CFILE`. The output file should have the `.s` extension.
*   **Concept**: Advanced understanding of assembly generation, specifically targeting Intel syntax which is common on x86 architectures, often done with specific `gcc` flags.

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)
*   **File**: `101-quote.c`
*   **Prototype**: `int main(void)`
*   **Description**: Write a C program that prints the string "and that piece of art is useful\" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error. You are not allowed to use any functions from the `printf` or `puts` families. Your program should return `1`.
*   **Concept**: Demonstrates how to print directly to standard error using low-level I/O functions like `write`, bypassing standard library functions like `printf` or `puts`, and understanding exit statuses.

## Compilation
All C files in this project are compiled on Ubuntu 20.04 LTS using `gcc` with the following flags:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

Example compilation for a C file:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 your_file.c -o your_executable
```

For shell scripts, ensure they have execute permissions:
```bash
chmod +x your_script_file
```

## Resources
*   [Introduction to C Programming](https://www.tutorialspoint.com/cprogramming/index.htm)
*   [GCC - The GNU Compiler Collection](https://gcc.gnu.org/onlinedocs/gcc/index.html)
*   [Betty Style Guide](https://github.com/alx-tools/Betty/blob/master/betty-style.pl)
*   [Puts vs Printf](https://www.geeksforgeeks.org/difference-between-puts-and-printf-in-c/)
*   [Sizeof Operator in C](https://www.geeksforgeeks.org/sizeof-operator-in-c-c-with-examples/)
*   [Standard Error (stderr)](https://www.geeksforgeeks.org/standard-streams-in-c-stdin-stdout-stderr/)

## Key Concepts Summary
This project introduces the foundational aspects of C programming, from the multi-stage compilation process (preprocessing, compilation, assembly, linking) to basic I/O operations using `puts` and `printf`. It emphasizes understanding how C code interacts with the system at a low level, including data type sizes and output redirection, while adhering to strict coding standards like Betty.

## Author
@zolldic
