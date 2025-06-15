0x00. C - Hello, World
About This Project
This is the very first project in the C programming language track of the ALX Software Engineering curriculum. It serves as an introduction to the C language, the compilation process, and basic shell scripting for compiling C code. The project covers fundamental concepts that are essential for all subsequent low-level programming projects.

Learning Objectives
Upon completion of this project, you should be able to explain and use the following concepts without the help of Google:

What are the four main steps in the compilation process (Preprocessing, Compilation, Assembly, Linking).

What happens at each step of the compilation process.

How to use gcc to compile C code.

The purpose of the -o, -c, -S, and -E gcc flags.

What are header files and their purpose.

What is a main function and its role.

How to write basic C programs that print output to the standard output and standard error.

The purpose and usage of the puts and printf functions.

The importance of the Betty coding and documentation style.

Requirements
General
Allowed Editors: vi, vim, emacs.

Environment: All files will be compiled on Ubuntu 20.04 LTS using gcc.

GCC Flags: All C files must be compiled with the flags: -Wall -Werror -Wextra -pedantic -std=gnu89.

Coding Style: All C code must adhere to the Betty style. It will be checked using betty-style.pl and betty-doc.pl.

File Endings: All files should end with a new line.

Executable Files: The first line of all shell scripts must be #!/bin/bash. All shell scripts must be executable (chmod +x file_name).

README.md: A README.md file at the root of the project folder is mandatory.

Tasks
0. Preprocessor
File: 0-preprocessor

Write a shell script that runs a C file through the preprocessor and saves the result into another file.

The C file name will be stored in the environment variable $CFILE.

The output file should be named c.

1. Compiler
File: 1-compiler

Write a shell script that compiles a C file but does not link it.

The C file name will be stored in the environment variable $CFILE.

The output filename should be the same as the C file, but with the extension .o instead of .c. (e.g., main.c would output main.o).

2. Assembler
File: 2-assembler

Write a shell script that generates the assembly code of a C file and saves it in an output file.

The C file name will be stored in the environment variable $CFILE.

The output filename should be the same as the C file, but with the extension .s instead of .c. (e.g., main.c would output main.s).

3. Name
File: 3-name

Write a shell script that compiles a C file and creates an executable named cisfun.

The C file name will be stored in the environment variable $CFILE.

4. Hello, puts
File: 4-puts.c

Write a C program that prints the string "Programming is like building a multilingual puzzle", followed by a new line.

You must use the puts function.

You are not allowed to use printf.

Your program should return 0.

5. Hello, printf
File: 5-printf.c

Write a C program that prints the string "with proper grammar, but the outcome is a piece of art,", followed by a new line.

You must use the printf function.

You are not allowed to use puts.

Your program should return 0.

6. Size is not grandeur, and territory does not make a nation
File: 6-size.c

Write a C program that prints the size of various data types on the computer it is compiled and run on.

The output should list the size in bytes for char, int, long int, long long int, and float.

7. Intel
File: 100-intel (Advanced)

Write a script that generates the assembly code (Intel syntax) of a C file and saves it in an output file.

The C file name will be stored in the variable $CFILE.

The output file should have the .s extension.

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
File: 101-quote.c (Advanced)

Write a C program that prints the string "and that piece of art is useful\" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.

You are not allowed to use any functions from the printf or puts families.

Your program should return 1.
