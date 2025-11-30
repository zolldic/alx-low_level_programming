# 0x13. C - More Singly Linked Lists

This project builds upon the previous singly linked lists project, exploring more advanced operations and edge cases with linked list data structures in C.

## Description

This project continues the exploration of singly linked lists with more complex operations including insertion at arbitrary positions, deletion of nodes, reversing lists, and handling lists with cycles.

## Learning Objectives

At the end of this project, you should be able to explain:
- How to use linked lists
- How to manipulate linked lists efficiently
- How to handle edge cases in linked list operations
- How to detect and handle cycles in linked lists
- When to use linked lists vs arrays

## Project Structure

### Header File
**File:** `lists.h`

Contains the structure definition and all function prototypes:
```c
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;
```

## Project Tasks

### 0. Print list
- **File:** `0-print_listint.c`
- **Prototype:** `size_t print_listint(const listint_t *h);`
- **Description:** Prints all elements of a `listint_t` list.
- **Concept:** Traversing a linked list and printing each node's data. Returns the number of nodes.

### 1. List length
- **File:** `1-listint_len.c`
- **Prototype:** `size_t listint_len(const listint_t *h);`
- **Description:** Returns the number of elements in a `listint_t` list.
- **Concept:** Counting nodes by traversing the list without printing.

### 2. Add node
- **File:** `2-add_nodeint.c`
- **Prototype:** `listint_t *add_nodeint(listint_t **head, const int n);`
- **Description:** Adds a new node at the beginning of a `listint_t` list.
- **Concept:** Inserting at the head requires updating the head pointer and linking the new node.

### 3. Add node at the end
- **File:** `3-add_nodeint_end.c`
- **Prototype:** `listint_t *add_nodeint_end(listint_t **head, const int n);`
- **Description:** Adds a new node at the end of a `listint_t` list.
- **Concept:** Traversing to the last node and appending. Must handle empty list case.

### 4. Free list
- **File:** `4-free_listint.c`
- **Prototype:** `void free_listint(listint_t *head);`
- **Description:** Frees a `listint_t` list.
- **Concept:** Proper memory deallocation by freeing each node sequentially.

### 5. Free
- **File:** `5-free_listint2.c`
- **Prototype:** `void free_listint2(listint_t **head);`
- **Description:** Frees a `listint_t` list and sets the head to NULL.
- **Concept:** Safe deallocation that prevents dangling pointers by nullifying the head.

### 6. Pop
- **File:** `6-pop_listint.c`
- **Prototype:** `int pop_listint(listint_t **head);`
- **Description:** Deletes the head node and returns its data.
- **Concept:** Removing from the front of the list, updating head pointer, and returning data.

### 7. Get nth node
- **File:** `7-get_nodeint.c`
- **Prototype:** `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- **Description:** Returns the nth node of a `listint_t` list.
- **Concept:** Accessing nodes by index requires traversal. Must handle out-of-bounds cases.

### 8. Sum list
- **File:** `8-sum_listint.c`
- **Prototype:** `int sum_listint(listint_t *head);`
- **Description:** Returns the sum of all the data in a `listint_t` list.
- **Concept:** Accumulating values during traversal. Empty list returns 0.

### 9. Insert
- **File:** `9-insert_nodeint.c`
- **Prototype:** `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- **Description:** Inserts a new node at a given position.
- **Concept:** Insertion at arbitrary position requires finding the previous node and updating pointers correctly.

### 10. Delete at index
- **File:** `10-delete_nodeint.c`
- **Prototype:** `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- **Description:** Deletes the node at index of a `listint_t` list.
- **Concept:** Deletion requires finding the node before the target, updating links, and freeing memory.

### 11. Reverse list (Advanced)
- **File:** `100-reverse_listint.c`
- **Prototype:** `listint_t *reverse_listint(listint_t **head);`
- **Description:** Reverses a `listint_t` list.
- **Concept:** Reversing pointers in place using three pointer technique without allocating new nodes.

### 12. Print (safe version) (Advanced)
- **File:** `101-print_listint_safe.c`
- **Prototype:** `size_t print_listint_safe(const listint_t *head);`
- **Description:** Prints a `listint_t` list, even if it contains a loop.
- **Concept:** Detecting cycles while printing to avoid infinite loops.

### 13. Free (safe version) (Advanced)
- **File:** `102-free_listint_safe.c`
- **Prototype:** `size_t free_listint_safe(listint_t **h);`
- **Description:** Frees a `listint_t` list that may contain a loop.
- **Concept:** Safe deallocation that detects and handles cycles to prevent infinite loops and memory leaks.

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [source_files]
```

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
```

## Testing

Each task includes a main file (e.g., `0-main.c`, `1-main.c`, etc.) for testing the corresponding function.

## Key Concepts Summary

- **Linked Lists:** Dynamic data structures where each element points to the next
- **Memory Management:** Proper allocation and deallocation to prevent leaks
- **Pointer Manipulation:** Understanding double pointers for modifying the list head
- **Edge Cases:** Empty lists, single-node lists, out-of-bounds access
- **Cycle Detection:** Identifying and handling loops in linked lists

## Author

@zolldic

## Note

This project emphasizes understanding data structures and memory management. Focus on learning the concepts rather than just completing tasks.
