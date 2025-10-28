# 0x0B. C - malloc, free

## Description
This project introduces dynamic memory allocation in C using `malloc` and `free`. It covers the fundamental concepts of memory management, including when and why to use dynamic allocation, and how to detect memory leaks using Valgrind.

## Learning Objectives
* What is the difference between automatic and dynamic allocation
* What is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use `valgrind` to check for memory leak

## Tasks
### 0. Float like a butterfly, sting like a bee
**File:** `0-create_array.c`  
Creates an array of chars and initializes it with a specific char. Returns NULL if size is 0 or if malloc fails.

### 1. The woman who has no imagination has no wings
**File:** `1-strdup.c`  
Returns a pointer to a newly allocated space in memory containing a copy of the string given as parameter.

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**File:** `2-str_concat.c`  
Concatenates two strings and returns a pointer to a newly allocated space in memory containing the result.

### 3. If you even dream of beating me you'd better wake up and apologize
**File:** `3-alloc_grid.c`  
Returns a pointer to a 2-dimensional array of integers, with each element initialized to 0.

### 4. It's not bragging if you can back it up
**File:** `4-free_grid.c`  
Frees a 2-dimensional grid previously created by the alloc_grid function.

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
**File:** `100-argstostr.c`  
Concatenates all the arguments of the program into a single string, with each argument separated by a newline.

### 6. I will show you how great I am
**File:** `101-strtow.c`  
Splits a string into words. Returns a pointer to an array of strings (words), with the last element being NULL.

## Compilation
All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output>
```

## Author
@zolldic
