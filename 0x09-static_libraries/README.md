# 0x09. C - Static libraries

## Description
This project is about learning static libraries in C programming.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm

## Requirements
### C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don't forget to push your header file

### Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash
- All your files must be executable

## Tasks

### 0. A library is not a luxury but one of the necessities of life
**mandatory**

Create the static library `libmy.a` containing all the functions listed below:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

If you haven't coded all of the above functions create empty ones with the right prototype.
Don't forget to push your `main.h` file to your repository. It should at least contain all the prototypes of the above functions.

**Files:** `libmy.a`, `main.h`

### 1. Without libraries what have we? We have no past and no future
**mandatory**

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

**File:** `create_static_lib.sh`
