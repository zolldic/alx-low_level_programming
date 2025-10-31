# 0x0D. C - Preprocessor

This project introduces the **C preprocessor**, a powerful tool that processes source code before compilation.  
You’ll learn how macros, header files, and preprocessing directives shape program behavior at compile time.

---

## Learning Objectives

By the end of this project, you should be able to:

- Explain what macros are and how they work
- Define macros using `#define`
- Understand and use include guards
- Identify the stages of compilation in C
- Use the `gcc` options to trace preprocessing steps

---

## Project Tasks

### 0. Object-like Macro
**File:** `0-object_like_macro.h`  
Defines a macro named `SIZE` with the value `1024`.

**Key Concept:** Using macros for constants instead of hard-coded values.

---

### 1. Pi
**File:** `1-pi.h`  
Defines a macro named `PI` with the value `3.14159265359`.

**Key Concept:** Defining mathematical constants with the preprocessor.

---

### 2. File name
**File:** `2-main.c`  
A program that prints the name of the file it was compiled from, followed by a new line.

**Key Concept:** Using the `__FILE__` predefined macro.

---

### 3. Function-like Macro
**File:** `3-function_like_macro.h`  
Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

**Key Concept:** Creating macros that behave like functions.

---

### 4. SUM
**File:** `4-sum.h`  
Defines a macro `SUM(x, y)` that computes the sum of two numbers `x` and `y`.

**Key Concept:** Function-like macros with multiple arguments.

---

## Compilation

All programs are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

