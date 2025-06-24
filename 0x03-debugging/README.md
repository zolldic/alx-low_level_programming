# 0x03. C - Debugging

## Description
This project focuses on debugging techniques in C programming. It covers methods for identifying and fixing errors in code manually, understanding error messages, and applying best practices to prevent bugs.

## Key Objectives
### General
- Understand what debugging is
- Learn methods of debugging manually
- Interpret error messages effectively

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- Compiler options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must use the Betty style
- A `README.md` file is required at:
  - The root of the repository
  - The root of the project folder (`0x03-debugging`)
- No plagiarism allowed

## Resources
- [Debugging techniques](https://savanna.alxafrica.com/rltoken/faGcpiJiejHH6GhqpmbhUw)
- [Rubber Duck Debugging](https://savanna.alxafrica.com/rltoken/RaecqJBNkmZ92vLMpNDuGg)
- Example debugging illustration provided in project documentation

## Tasks

### 0. Multiple mains (Mandatory)
**Goal:** Test the `positive_or_negative()` function with a case of `0`

**Requirements:**
- Create `0-main.c` to test the function
- Adapt your function from a previous project to compile with this main file
- Only allowed to change one line of code
- Upload `0-main.c` and `main.h`

**Expected Output:**
```
0 is zero
```

### 1. Like, comment, subscribe (Mandatory)
**Goal:** Fix an infinite loop by commenting out problematic code

**Requirements:**
- Comment out (don't delete) the problematic code
- Don't add or remove any lines
- Compilation doesn't require strict flags for this task

**Expected Output:**
```
Infinite loop incoming :(
Infinite loop avoided! \o/
```

### 2. 0 > 972? (Mandatory)
**Goal:** Fix a function that incorrectly identifies the largest of three numbers

**Requirements:**
- Modify `2-largest_number.c` to correctly identify largest numbers
- Fix the logic to handle all cases
- No line count restriction

**Expected Output:**
Given inputs (972, -98, 0), should output:
```
972 is the largest number
```

### 3. Leap year (Mandatory)
**Goal:** Fix date conversion and remaining days calculation to properly account for leap years

**Requirements:**
- Modify `3-print_remaining_days.c`
- Handle all valid date cases correctly
- Account for leap years properly
- No line count restriction
- Assume all test cases have valid months and days

**Example Output for 02/29/2000:**
Should properly recognize as a valid leap year date

## Project Structure
```
0x03-debugging/
├── 0-main.c
├── 1-main.c
├── 2-main.c
├── 2-largest_number.c
├── 3-main_a.c
├── 3-main_b.c
├── 3-convert_day.c
├── 3-print_remaining_days.c
└── main.h
```
