# Low-level programming & Algorithm - Data structures and Algorithms
# C - Singly linked lists



# Concepts
--------------------------------------------------------------------------
[Data Structures](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/DataStructures.md)
<br /><br />



# Resources
--------------------------------------------------------------------------
## Read or watch:
[Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s) <br />
[Google](https://www.google.com/#q=linked+lists) <br />
[Youtube](https://www.youtube.com/results?search_query=linked+lists) <br />
<br /><br />



# Learning Objectives
--------------------------------------------------------------------------
## General
* When and why using linked lists vs arrays
* How to build and use linked lists
<br /><br />



# Requirements
--------------------------------------------------------------------------
## General
* Allowed editors: ***vi***, ***vim***, ***emacs***
* All your files will be compiled on Ubuntu 20.04 LTS using ***gcc***, using the options ***-Wall -Werror -Wextra -pedantic -std=gnu89***
* All your files should end with a new line
* Your code should use the ***Betty*** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are ***malloc***, ***free***, ***exit***. Any use of functions like ***printf***, ***puts***, ***calloc***, ***realloc*** etc… is forbidden
* You are allowed to use [_putchar](https://github.com/pie972/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/_putchar.c)
* The prototypes of all your functions and the prototype of the function ***_putchar*** should be included in your header file called ***lists.h***
* All your header files should be include guarded

## More Info
Please use this data structure for this project:
```bash
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
<br /><br />



# Tasks
--------------------------------------------------------------------------
## 0. Print list 

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [0-print_list.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)<br />



## 1. List length

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [1-list_len.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c)<br />



## 2. Add node 

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [2-add_node.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c)<br />



## 3. Add node at the end

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [3-add_node_end.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c)<br />



## 4. Free list

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [4-free_list.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c)<br />



## 5. The Hare and the Tortoise

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [100-first.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c)<br />



## 6. Real programmers can write assembly code in any language

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x12-singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists)
- File: [101-hello_holberton.asm](https://github.com/pie972/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm)<br />
