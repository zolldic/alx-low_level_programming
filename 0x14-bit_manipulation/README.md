# 0x14. C - Bit Manipulation

This project explores bit manipulation in C, teaching how to work with individual bits using bitwise operators. Bit manipulation is essential for low-level programming, optimizations, and understanding how data is stored at the hardware level.

## Learning Objectives

At the end of this project, you should be able to explain:

* How to manipulate bits and use bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
* How to check, set, clear, and flip specific bits in a number
* How to convert between binary and decimal representations
* The practical applications of bit manipulation in systems programming

## Project Structure

* `main.h` - Header file containing all function prototypes
* `_putchar.c` - Character output function

## Project Tasks

**File:** `0-binary_to_uint.c`  
**Prototype:** `unsigned int binary_to_uint(const char *b);`

Convert a binary number (as a string) to an unsigned integer.

**Concept:** String parsing and binary-to-decimal conversion using powers of 2.

---

**File:** `1-print_binary.c`  
**Prototype:** `void print_binary(unsigned long int n);`

Print the binary representation of a number without using arrays, malloc, or the `%` or `/` operators.

**Concept:** Extracting bits using bitwise operations and bit shifting.

---

**File:** `2-get_bit.c`  
**Prototype:** `int get_bit(unsigned long int n, unsigned int index);`

Return the value of a bit at a given index (0 or 1).

**Concept:** Bit masking using the AND operator and bit shifting.

---

**File:** `3-set_bit.c`  
**Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`

Set the value of a bit to 1 at a given index.

**Concept:** Using the OR operator with a bit mask to turn on specific bits.

---

**File:** `4-clear_bit.c`  
**Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`

Set the value of a bit to 0 at a given index.

**Concept:** Using AND with a negated bit mask to turn off specific bits.

---

**File:** `5-flip_bits.c`  
**Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

Return the number of bits needed to flip to convert one number to another.

**Concept:** XOR operation reveals differing bits, then count them.

---

## Compilation

All files are compiled on Ubuntu 20.04 LTS using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o <output>
```

Example:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-binary_to_uint.c -o a
./a
```

## Resources

* [Bitwise Operators in C](https://www.programiz.com/c-programming/bitwise-operators)
* [Understanding Bit Manipulation](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)

## Key Concepts Summary

**Bitwise Operators:**
* `&` (AND) - Used for masking and checking bits
* `|` (OR) - Used for setting bits
* `^` (XOR) - Used for toggling bits and finding differences
* `~` (NOT) - Used for flipping all bits
* `<<` (Left shift) - Multiplies by powers of 2
* `>>` (Right shift) - Divides by powers of 2

**Common Patterns:**
* Set bit: `n |= (1 << index)`
* Clear bit: `n &= ~(1 << index)`
* Toggle bit: `n ^= (1 << index)`
* Check bit: `(n >> index) & 1`

## Author

@zolldic

## Note

This project emphasizes understanding low-level operations and how computers work with data at the bit level. Focus on comprehending each operation rather than memorizing solutions.
