# 0x0E. C - Structures, typedef

This project explores the use of structures and typedef in C programming. It demonstrates how to define, initialize, manipulate, and manage custom data types using structures.

## Learning Objectives

By the end of this project, you should be able to explain:

- What are structures, when, why and how to use them
- How to use `typedef`

## Project Structure

### Header File
- **`dog.h`** - Contains all structure definitions, type definitions, and function prototypes

## Project Tasks

### 0. Poppy
**File:** `dog.h`

Define a new type `struct dog` with the following elements:
- `name` - type: `char *`
- `age` - type: `float`
- `owner` - type: `char *`

**Concept:** Creating a basic structure to represent a dog with its attributes.

---

### 1. A dog is the only thing on earth that loves you more than you love yourself
**File:** `1-init_dog.c`  
**Prototype:** `void init_dog(struct dog *d, char *name, float age, char *owner);`

Write a function that initializes a variable of type `struct dog`.

**Concept:** Structure initialization - assigning values to structure members through a function.

---

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
**File:** `2-print_dog.c`  
**Prototype:** `void print_dog(struct dog *d);`

Write a function that prints a `struct dog`.

**Requirements:**
- If an element is `NULL`, print `(nil)` instead of this element
- If `d` is `NULL`, print nothing

**Concept:** Safely accessing and displaying structure data with null-checking.

---

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
**File:** `dog.h`

Define a new type `dog_t` as a new name for the type `struct dog`.

**Concept:** Using `typedef` to create an alias for a structure type, simplifying code readability.

---

### 4. A door is what a dog is perpetually on the wrong side of
**File:** `4-new_dog.c`  
**Prototype:** `dog_t *new_dog(char *name, float age, char *owner);`

Write a function that creates a new dog.

**Requirements:**
- Store a copy of `name` and `owner`
- Return `NULL` if the function fails

**Concept:** Dynamic memory allocation for structures and strings, proper memory management.

---

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
**File:** `5-free_dog.c`  
**Prototype:** `void free_dog(dog_t *d);`

Write a function that frees dogs.

**Concept:** Proper memory deallocation to prevent memory leaks, including freeing nested allocated memory.

---

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_files>
```

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o dog
```

## Resources

- [C - Structures](https://www.tutorialspoint.com/cprogramming/c_structures.htm)
- [C - typedef](https://www.tutorialspoint.com/cprogramming/c_typedef.htm)
- [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20210126%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210126T143503Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=fa85ac76e1dfbc6c097e436fad73df6e6e4a91f47e8e3ecd63d8089d17b0a0b5)
- [Programming in C (Chapter 8 - Working with Structures)](https://www.amazon.com/Programming-C-4th-Developers-Library/dp/0321776410)

## Author
@zolldic
---

**Note:** This project focuses on understanding structures and typedef in C. Practice proper memory management and null-checking to write robust code.
