# 0x12. C - Singly Linked Lists

This project explores the implementation and manipulation of **singly linked lists** in C. You'll learn when to use linked lists over arrays, how to build them, traverse them, and manage dynamic memory effectively.

## Learning Objectives

By the end of this project, you should be able to explain:

- **When and why to use linked lists vs arrays**
  - Linked lists are ideal for dynamic data that requires frequent insertions/deletions
  - Arrays are better for random access and contiguous memory
- **How to build and use linked lists**
  - Creating nodes dynamically
  - Linking nodes together
  - Traversing, inserting, and deleting nodes
- **Memory management with linked lists**
  - Proper allocation and freeing of nodes
  - Avoiding memory leaks

## Project Structure

### Header File
- **`lists.h`** - Contains the `list_t` structure definition and all function prototypes

### Data Structure
```c
typedef struct list_s {
    char *str;           // String stored in the node (malloc'ed)
    unsigned int len;    // Length of the string
    struct list_s *next; // Pointer to the next node
} list_t;
```

## Project Tasks

### 0. Print list
- **File:** `0-print_list.c`
- **Prototype:** `size_t print_list(const list_t *h);`
- **Description:** Prints all elements of a `list_t` linked list. Returns the number of nodes.
- **Concept:** Traversing a linked list using a pointer and accessing struct members. If `str` is `NULL`, print `[0] (nil)`.

### 1. List length
- **File:** `1-list_len.c`
- **Prototype:** `size_t list_len(const list_t *h);`
- **Description:** Returns the number of elements in a `list_t` linked list.
- **Concept:** Counting nodes by iterating through the list without modifying it.

### 2. Add node
- **File:** `2-add_node.c`
- **Prototype:** `list_t *add_node(list_t **head, const char *str);`
- **Description:** Adds a new node at the beginning of a `list_t` list.
- **Concept:** Dynamic memory allocation with `malloc`, duplicating strings with `strdup`, and updating the head pointer. Returns the address of the new element, or `NULL` if it fails.

### 3. Add node at the end
- **File:** `3-add_node_end.c`
- **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
- **Description:** Adds a new node at the end of a `list_t` list.
- **Concept:** Traversing to the last node and linking a new node. Handles both empty and non-empty lists. Returns the address of the new element, or `NULL` if it fails.

### 4. Free list
- **File:** `4-free_list.c`
- **Prototype:** `void free_list(list_t *head);`
- **Description:** Frees all memory allocated for a `list_t` list.
- **Concept:** Proper memory deallocation by freeing each node's string and the node itself. Prevents memory leaks.

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

**Example:**
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
```

## Resources

- [Linked Lists (Data Structures)](https://www.youtube.com/results?search_query=linked+lists+in+c)
- [What is a Linked List](https://www.geeksforgeeks.org/data-structures/linked-list/)
- [Singly Linked Lists in C](https://www.learn-c.org/)
- Google & YouTube for additional explanations

## Key Concepts Summary

### Why Linked Lists?
- **Dynamic size** - Grows and shrinks at runtime
- **Efficient insertions/deletions** - O(1) at head, O(n) elsewhere
- **No memory waste** - Only allocates what's needed

### Linked List vs Array
| Feature | Array | Linked List |
|---------|-------|-------------|
| Access | O(1) - Direct indexing | O(n) - Sequential traversal |
| Insertion/Deletion | O(n) - Shifting elements | O(1) at head, O(n) elsewhere |
| Memory | Contiguous, fixed/limited | Non-contiguous, dynamic |
| Cache performance | Better (locality) | Worse (scattered) |

### Common Operations
1. **Traverse:** Start at head, follow `next` pointers until `NULL`
2. **Insert at head:** Create node, point it to old head, update head
3. **Insert at tail:** Traverse to last node, link new node
4. **Free:** Traverse and free each node's string and node itself

## Author

**@zolldic**

---

**Note:** This project emphasizes understanding data structures and memory management. Focus on learning how linked lists work internally rather than memorizing code patterns. Experiment, debug, and build your intuition!
