# Low-level programming & Algorithm - Data structures and Algorithms
# C - More singly linked lists



# Resources
--------------------------------------------------------------------------
## Read or watch:
[Google](https://www.google.com/#q=linked+lists) <br />
[Youtube](https://www.youtube.com/results?search_query=linked+lists) <br />
<br /><br />



# Learning Objectives
--------------------------------------------------------------------------
## General
* How to use linked lists
* Start to look for the right source of information without too much help
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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
<br /><br />



# Tasks
--------------------------------------------------------------------------
## 0. Print list

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [0-print_listint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c)<br />



## 1. List length

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [1-listint_len.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c)<br />



## 2. Add node

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [2-add_nodeint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c)<br />



## 3. Add node at the end

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [3-add_nodeint_end.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c)<br />



## 4. Free list

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [4-free_listint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c)<br />



## 5. Free

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [5-free_listint2.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c)<br />



## 6. Pop

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [6-pop_listint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c)<br />



## 7. Get node at index

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [7-get_nodeint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c)<br />



## 8. Sum list

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [8-sum_listint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c)<br />



## 9. Insert

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [9-insert_nodeint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c)<br />



## 10. Delete at index

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [10-delete_nodeint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c)<br />



## 11. Reverse list

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [100-reverse_listint.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c)<br />



## 12. Print (safe version)

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [101-print_listint_safe.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c)<br />



## 13. Free (safe version)

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [102-free_listint_safe.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/102-free_listint_safe.c)<br />



## 14. Find the loop

```bash
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x13-more_singly_linked_lists](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists)
- File: [103-find_loop.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/103-find_loop.c)<br />
