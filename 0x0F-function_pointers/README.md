# 0x0F. C - Function pointers

This project introduces function pointers in C, a powerful feature that allows functions to be treated as data. You'll learn how to pass functions as arguments, store them in variables, and use them to create flexible and reusable code.

## Learning Objectives

By the end of this project, you should be able to explain:

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Project Structure

### Header File
- **`function_pointers.h`** - Contains all function prototypes

## Project Tasks

### 0. What's my name
**File:** `0-print_name.c`  
**Prototype:** `void print_name(char *name, void (*f)(char *));`

Write a function that prints a name using a function pointer.

**Concept:** Understanding how to pass a function as a parameter. The function pointer `f` determines *how* the name is printed (uppercase, lowercase, etc.).

---

### 1. If you spend too much time thinking about a thing, you'll never get it done
**File:** `1-array_iterator.c`  
**Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`
Write a function that executes a function given as a parameter on each element of an array.

**Concept:** Using function pointers to apply different operations to array elements without rewriting the iteration logic. This is the foundation of callback functions.

---

### 2. To hell with circumstances; I create opportunities
**File:** `2-int_index.c`  
**Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

Write a function that searches for an integer using a comparison function.

**Requirements:**
- Returns the index of the first element for which the `cmp` function does not return 0
- If no element matches or size ≤ 0, return -1

**Concept:** Function pointers for custom comparison logic, allowing flexible search criteria without modifying the search function.

---

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
**Files:** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

Create a program that performs simple arithmetic operations using function pointers.

**Prototypes in `3-op_functions.c`:**
- `int op_add(int a, int b);`
- `int op_sub(int a, int b);`
- `int op_mul(int a, int b);`
- `int op_div(int a, int b);`
- `int op_mod(int a, int b);`

**Prototype in `3-get_op_func.c`:**
- `int (*get_op_func(char *s))(int, int);`

**Usage:** `./calc num1 operator num2`

**Concept:** Function pointer arrays and selector functions. Demonstrates how to map operators to functions dynamically, creating a simple calculator without long if-else chains.

---

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
**File:** `100-main_opcodes.c`

Write a program that prints the opcodes of its own main function.

**Requirements:**
- Usage: `./main number_of_bytes`
- Prints the opcodes in hexadecimal (lowercase), separated by space
- Prints 2 bytes per opcode
- Error handling:
  - If incorrect number of arguments: print "Error" and exit with status 1
  - If number of bytes is negative: print "Error" and exit with status 2

**Concept:** Understanding how functions are stored in memory as machine code. This advanced task explores the relationship between C code and assembly/machine instructions.

---

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_files>
```

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
```

For Task 3 (calculator):
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

## Resources

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to Functions](https://publications.gbdirect.co.uk/c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [Why Pointers to Functions?](https://www.learn-c.org/en/Function_Pointers)
- [Function Pointer Example](https://www.programiz.com/c-programming/c-pointers-functions)

## Key Concepts Summary

1. **Function pointers** store the address of a function in memory
2. They enable **callbacks** - passing behavior as a parameter
3. Useful for **code reusability** - write generic algorithms that work with different operations
4. **Syntax**: `return_type (*pointer_name)(parameter_types);`
5. **Function pointer arrays** can map keys (like operators) to functions

## Author
@zolldic
---

**Note:** Function pointers are powerful but can be tricky. Focus on understanding *when* and *why* to use them, not just the syntax. They're especially useful in callback systems, plugin architectures, and state machines.
