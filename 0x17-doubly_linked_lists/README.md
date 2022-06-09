# 0x17. C - Doubly linked lists

## Objectives

- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Data structure for the project

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### Mandatory Tasks

**[lists.h](lists.h)** - header file containing all function prototypes and the definition of type `dlistint_t`.

**[0-print_dlistint.c](0-print_dlistint.c)** - function that prints all the elements of a `dlistint_t` list.

**[1-dlistint_len.c](1-dlistint_len.c)** - function that returns the number of elements in a linked `dlistint_t` list.

**[2-add_dnodeint.c](2-add_dnodeint.c)** - function that adds a new node at the beginning of a `dlistint_t` list.

**[3-add_dnodeint_end.c](3-add_dnodeint_end.c)** - function that adds a new node at the end of a `dlistint_t` list.

**[4-free_dlistint.c](4-free_dlistint.c)** - function that frees a `dlistint_t` list.

**[5-get_dnodeint.c](5-get_dnodeint.c)** - function that returns the nth node of a `dlistint_t` linked list.

**[6-sum_dlistint.c](6-sum_dlistint.c)** - function that returns the sum of all the data (n) of a `dlistint_t` linked list.

**[7-insert_dnodeint.c](7-insert_dnodeint.c)** - function that inserts a new node at a given index of a `dlistint_t` linked list.

**[8-delete_dnodeint.c](8-delete_dnodeint.c)** - function that deletes a node at a given index of a `dlistint_t` linked list.

### Advanced Tasks

**[100-password](100-password)** - the found password of [crackme4](https://github.com/holbertonschool/0x17.c)

**[102-result](102-result)** - the largest palindrome made from the product of two 3-digit numbers.

**[palindrome.py](palindrome.py)** - python script to find the largest palindrome made from the product of two 3-digit numbers.

**[103-keygen.c](103-keygen.c)** - a keygen for [crackme5](https://github.com/holbertonschool/0x17.c).
