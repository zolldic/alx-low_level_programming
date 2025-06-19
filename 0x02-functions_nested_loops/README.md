Here's a well-structured README document based on the provided HTML content, highlighting the project's goals, requirements, and tasks:

---

# C - Functions, Nested Loops  
**Project ID:** `0x02`  
**Curriculum:** SE Foundations  

## 🎯 Project Goals  
This project focuses on mastering **functions** and **nested loops** in C programming. By the end, you should be able to:  
- Explain nested loops and their usage.  
- Define functions, prototypes, and understand variable scope.  
- Differentiate between function declarations and definitions.  
- Use header files and GCC flags effectively.  

---

## 📋 Requirements  
### General  
- **Editors:** `vi`, `vim`, or `emacs`.  
- **Compilation:**  
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- **Code Style:** Betty-compliant (checked via `betty-style.pl` and `betty-doc.pl`).  
- **Restrictions:**  
  - No global variables.  
  - Maximum of 5 functions per file.  
  - No standard library functions (e.g., `printf`, `puts`).  
  - Only `_putchar.c` is allowed for I/O.  
- **File Structure:**  
  - Include prototypes in `main.h`.  
  - Each task has a dedicated `.c` file (e.g., `0-putchar.c`).  

### Mandatory vs. Optional Tasks  
- **Mandatory:** 64.1/106 points (60.47%).  
- **Optional:** 12.0/36 points (33.33%).  
- **Total Score:** 80.62%.  

---

## 📚 Resources  
### Core Reading  
1. [Nested While Loops](https://example.com/nested-loops)  
2. [C Functions](https://example.com/c-functions)  
3. [Function Prototypes](https://example.com/prototypes)  
4. [Header Files](https://example.com/headers) *(Stop before "Once-Only Headers")*  

### Additional  
- [C Programming Loops & Functions](https://example.com/loops-functions)  
- [Functions in C](https://example.com/functions-guide)  

---

## ✅ Tasks Breakdown  

### Mandatory Tasks  
| #  | Task | Objective | File | 
|----|------|-----------|------|
| 0  | `_putchar` | Print `_putchar` followed by a newline. | `0-putchar.c` |  
| 1  | `print_alphabet` | Print lowercase alphabet using `_putchar` (twice max). | `1-alphabet.c` |  
| 2  | `print_alphabet_x10` | Print alphabet 10 times. | `2-print_alphabet_x10.c` |  
| 3  | `_islower` | Check for lowercase characters (returns `1` or `0`). | `3-islower.c` |  
| 4  | `_isalpha` | Check for alphabetic characters. | `4-isalpha.c` |  
| 5  | `print_sign` | Print `+`, `0`, or `-` based on number sign. | `5-sign.c` |  
| 6  | `_abs` | Compute absolute value of an integer. | `6-abs.c` |  
| 7  | `print_last_digit` | Print and return the last digit of a number. | `7-print_last_digit.c` |  
| 8  | `jack_bauer` | Print every minute of a day (00:00 to 23:59). | `8-24_hours.c` |  
| 9  | `times_table` | Print the 9 times table. | `9-times_table.c` |  
| 10 | `add` | Add two integers and return the result. | `10-add.c` |  
| 11 | `print_to_98` | Print all natural numbers from `n` to `98`. | `11-print_to_98.c` |  

### Advanced Tasks  
| #  | Task | Objective | File | 
|----|------|-----------|------|
| 12 | `print_times_table` | Print `n` times table (0 ≤ n ≤ 15). | `100-times_table.c` |  
| 13 | Sum Multiples | Sum multiples of 3 or 5 below `1024`. | `101-natural.c` |  
| 14 | Fibonacci 50 | Print first 50 Fibonacci numbers. | `102-fibonacci.c` |  
| 15 | Even Fibonacci Sum | Sum even Fibonacci numbers ≤ 4,000,000. | `103-fibonacci.c` |  
| 16 | Fibonacci 98 | Print first 98 Fibonacci numbers (no `long long`/arrays). | `104-fibonacci.c` |  

---

## 🚀 Example Outputs  
For each task, sample outputs are provided in the HTML (e.g., `./0-putchar` prints `_putchar`).  

---

## 📝 Notes  
- **Avoid Plagiarism:** Solutions must be original.  
- **Compilation:** Test with provided `main.c` files; only submit task-specific `.c` files.  
- **Header File:** Ensure `main.h` includes all prototypes.  
