# **0x04. C - More functions, more nested loops**  

## **Project Overview**  
This project focuses on expanding knowledge of C programming by practicing **functions** and **nested loops**. The tasks involve writing various C functions to manipulate numbers, print patterns, and solve algorithmic problems.

### **Learning Objectives**  
By the end of this project, you should be able to:  
1. Understand and use **nested loops** effectively.  
2. Declare, define, and use **functions** in C.  
3. Differentiate between **function declarations** and **definitions**.  
4. Explain the purpose of **function prototypes** and **header files**.  
5. Understand the **scope of variables**.  
6. Use GCC compilation flags (`-Wall -Werror -pedantic -Wextra -std=gnu89`).  
7. Work with **header files** (`#include` directives).  

---

## **Requirements**  

### **General**  
✅ **Allowed Editors:** `vi`, `vim`, `emacs`  
✅ **Compilation:** Ubuntu 20.04 LTS using `gcc` with flags:  
```sh
-Wall -Werror -Wextra -pedantic -std=gnu89
```  
✅ **File Format:** All files must end with a newline.  
✅ **Style:** Follow **Betty Style Guidelines** (checked via `betty-style.pl` & `betty-doc.pl`).  
✅ **Restrictions:**  
   - No global variables.  
   - ≤5 functions per file.  
   - No standard library (e.g., `printf`, `puts`). Use `_putchar` provided [here](https://github.com/alx-tools/_putchar.c).  
   - **`main.h`**: Contains all function prototypes and `_putchar`.  

---

## **Tasks Breakdown**  

### **Mandatory Tasks**  

| Task No. | File Name | Task Description | Prototype/Requirements |
|----------|-----------|------------------|-----------------------|
| 0        | [`0-isupper.c`](./0-isupper.c) | Check for uppercase character | `int _isupper(int c);` |
| 1        | [`1-isdigit.c`](./1-isdigit.c) | Check for a digit (0-9) | `int _isdigit(int c);` |
| 2        | [`2-mul.c`](./2-mul.c) | Multiply two integers | `int mul(int a, int b);` |
| 3        | [`3-print_numbers.c`](./3-print_numbers.c) | Print numbers 0-9 | `void print_numbers(void);` (Use `_putchar` twice) |
| 4        | [`4-print_most_numbers.c`](./4-print_most_numbers.c) | Print numbers 0-9 (skip 2 & 4) | `void print_most_numbers(void);` |
| 5        | [`5-more_numbers.c`](./5-more_numbers.c) | Print 0-14 ten times | `void more_numbers(void);` (Use `_putchar` three times) |
| 6        | [`6-print_line.c`](./6-print_line.c) | Draw a straight line (`_` characters) | `void print_line(int n);` |
| 7        | [`7-print_diagonal.c`](./7-print_diagonal.c) | Draw a diagonal line (`\` characters) | `void print_diagonal(int n);` |
| 8        | [`8-print_square.c`](./8-print_square.c) | Print a square (`#` characters) | `void print_square(int size);` |
| 9        | [`9-fizz_buzz.c`](./9-fizz_buzz.c) | Fizz-Buzz (multiples of 3/5) | No prototype (standard lib allowed) |
| 10       | [`10-print_triangle.c`](./10-print_triangle.c) | Print a triangle (`#` characters) | `void print_triangle(int size);` |

### **Advanced Tasks**  

| Task No. | File Name | Task Description | Prototype/Requirements |
|----------|-----------|------------------|-----------------------|
| 11       | [`100-prime_factor.c`](./100-prime_factor.c) | Find largest prime factor of `612852475143` | No prototype (standard lib allowed) |
| 12       | [`101-print_number.c`](./101-print_number.c) | Print an integer using `_putchar` | `void print_number(int n);` (No `long`, arrays, or pointers) |

---

## **Compilation & Testing**  
To compile and test your code, use the following command structure:  
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [main_file.c] [task_file.c] -o [output_name]
```

**Example (Task 0):**  
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-isupper.c -o 0-isupper
./0-isupper
```

---

## **Resources**  
### **Read or Watch**  
- [Nested Loops in C](https://savanna.alxafrica.com/rltoken/aDRkFzUkVysnD94Dpm3w5g)  
- [C Functions](https://savanna.alxafrica.com/rltoken/R_UwV6xCPM_FksxHSghMtQ)  
- [Function Prototypes](https://savanna.alxafrica.com/rltoken/pUXhvD6-xl5BbWyj1AhCEA)  
- [C Header Files](https://savanna.alxafrica.com/rltoken/IFY075ffrszSJvHqPAa-zQ)  

