# 0x0A. C - argc, argv

## Description
This project covers the use of command-line arguments in C programming through `argc` and `argv` parameters in the `main` function.

## Learning Objectives
* How to use arguments passed to your program
* What are two prototypes of `main` that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files should end with a new line
* Code should use the Betty style
* Not allowed to use global variables
* No more than 5 functions per file
* Prototypes of all functions should be included in the header file called `main.h`

## Tasks

### 0. It ain't what they call you, it's what you answer to
**File:** `0-whatsmyname.c`

Write a program that prints its name, followed by a new line.

### 1. Silence is argument carried out by other means
**File:** `1-args.c`

Write a program that prints the number of arguments passed into it.

### 2. The best argument against democracy is a five-minute conversation with the average voter
**File:** `2-args.c`

Write a program that prints all arguments it receives.

### 3. Neither irony nor sarcasm is argument
**File:** `3-mul.c`

Write a program that multiplies two numbers.

### 4. To infinity and beyond
**File:** `4-add.c`

Write a program that adds positive numbers.

### 5. Minimal Number of Coins for Change (Advanced)
**File:** `100-change.c`

Write a program that prints the minimum number of coins to make change for an amount of money.

## Compilation
All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output>
```
