# Project: 0x01-variables_if_else_while

## Brief Description
This repository contains C programs focusing on fundamental programming concepts such as variables, conditional statements (`if`, `else if`, `else`), and loops (`while`). Each program addresses a specific task, ranging from printing numbers and alphabets to generating combinations.

## Learning Objectives
Upon completing this project, you should be able to:
* Understand and use arithmetic operators.
* Understand and use logical operators.
* Understand and use relational operators.
* Understand and use increment and decrement operators.
* Work with `if`, `else if`, and `else` statements.
* Understand the `while` loop.
* Declare and initialize variables.
* Use the `putchar` function to print characters.
* Understand the ASCII character set.

## Project Structure
All source code files are `.c` files.
- All files are compiled using `gcc`.

## Project Tasks

### 0-positive_or_negative.c
- **Prototype:** `int main(void)`
- **Description:** This program assigns a random number to `n` and then prints whether `n` is positive, negative, or zero.
- **Concept:** Introduction to random number generation, variable assignment, and conditional statements (`if/else if/else`) to check the sign of a number.

### 1-last_digit.c
- **Prototype:** `int main(void)`
- **Description:** This program assigns a random number to `n`, calculates its last digit, and then prints the last digit along with a message indicating its relation to 5 and 0.
- **Concept:** Using the modulo operator (`%`) to extract the last digit of an integer and applying conditional logic to categorize the result.

### 2-print_alphabet.c
- **Prototype:** `int main(void)`
- **Description:** This program prints the lowercase alphabet, followed by a new line.
- **Concept:** Iterating through characters using a `while` loop and printing them using `putchar`, understanding ASCII values for character representation.

### 3-print_alphabets.c
- **Prototype:** `int main(void)`
- **Description:** This program prints the lowercase alphabet, then the uppercase alphabet, followed by a new line.
- **Concept:** Extending character iteration to include both lowercase and uppercase alphabets, demonstrating sequential printing.

### 4-print_alphabt.c
- **Prototype:** `int main(void)`
- **Description:** This program prints the lowercase alphabet, excluding 'q' and 'e', followed by a new line.
- **Concept:** Combining character iteration with conditional statements to exclude specific characters from the output.

### 5-print_numbers.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all single digit numbers (0-9), followed by a new line.
- **Concept:** Iterating through numeric characters (digits) using their ASCII values and `putchar`.

### 6-print_numberz.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all single digit numbers (0-9), followed by a new line, exclusively using the `putchar` function.
- **Concept:** Similar to `5-print_numbers.c`, reinforcing the use of `putchar` for printing digits and understanding their ASCII representation.

### 7-print_tebahpla.c
- **Prototype:** `int main(void)`
- **Description:** This program prints the lowercase alphabet in reverse, followed by a new line.
- **Concept:** Demonstrating reverse iteration through characters using a `while` loop with a decrementing counter.

### 8-print_base16.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all the numbers of base 16 (0-9 and a-f) in lowercase, followed by a new line.
- **Concept:** Combining iteration for digits and lowercase letters to represent hexadecimal values.

### 9-print_comb.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all possible unique combinations of single-digit numbers, separated by ", ", followed by a new line. (e.g., `0, 1, 2, ..., 9`)
- **Concept:** Generating and formatting sequences of single digits, including proper punctuation and spacing.

### 100-print_comb3.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all possible different combinations of two unique digits, separated by ", ", in ascending order, followed by a new line. (e.g., `01, 02, ..., 89`)
- **Concept:** Nested loops for generating combinations, ensuring uniqueness and ascending order, and handling formatting with commas and spaces.

### 101-print_comb4.c
- **Prototype:** `int main(void)`
- **Description:** This program prints all possible different combinations of three unique digits, separated by ", ", in ascending order, followed by a new line. (e.g., `012, 013, ..., 789`)
- **Concept:** Further application of nested loops to generate three-digit combinations, maintaining uniqueness, order, and correct formatting.

### 102-print_comb5.c
- **Prototype:** `int main(void)`
- **Description:** This program is intended to print all possible unique combinations of two two-digit numbers, separated by ", ", in ascending order, followed by a new line. (e.g., `00 01, 00 02, ..., 98 99`)
- **Concept:** Complex nested loop logic to generate and filter combinations of two-digit numbers, ensuring they are unique and in ascending order, along with precise formatting.

## Compilation
All C files in this repository can be compiled using the `gcc` compiler.

Example:
```bash
gcc -Wall -Wextra -Werror -pedantic 0-positive_or_negative.c -o 0-positive_or_negative
./0-positive_or_negative
```
To compile all files:
```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o all_programs
```

## Resources
*   [Learning C Programming](https://www.tutorialspoint.com/cprogramming/index.htm)
*   [Pointers in C](https://www.geeksforgeeks.org/pointers-in-c-language/)
*   [Betty Style Guide](https://github.com/alx-tools/Betty/blob/master/betty-style.txt)

## Key Concepts Summary
This project primarily reinforces the understanding of control flow (conditional statements and loops), basic input/output operations using `putchar`, ASCII character manipulation, and the generation of numerical and character sequences and combinations. It also introduces the concept of random number generation and basic arithmetic operations.

## Author
@zolldic
