TO BE CONTINUED 
# Low-level programming & Algorithm - Hatching out
# Pointers, Arrays, and Strings

# Resources
--------------------------------------------------------------------------
## Read or watch:
[Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss) <br />
[C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm) <br />
[Learning to Program in C (Part 06) (stop at 14:00)](https://www.youtube.com/watch?v=qMlnFwYdqIw) <br />
[What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/) <br />
[C - Header Files (stop before the “Once-Only Headers” paragraph)](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) <br />


# Learning Objectives
--------------------------------------------------------------------------
## General
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the ***gcc*** flags ***-Wall -Werror -pedantic -Wextra -std=gnu89***
* What are header files and how to to use them with ***#include***
<br />


# Requirements
--------------------------------------------------------------------------
## General
* Allowed editors: ***vi***, ***vim***, ***emacs***
* All your files will be compiled on Ubuntu 20.04 LTS using ***gcc***, using the options ***-Wall -Werror -Wextra -pedantic -std=gnu89***
* All your files should end with a new line
* Your code should use the ***Betty*** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like ***printf***, ***puts***, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/pie972/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/_putchar.c)
<br />

## More Info
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.
<br /><br />


# Tasks
--------------------------------------------------------------------------
## 0. isupper
Write a function that checks for uppercase character.
* Prototype: ***int _isupper(int c);***
* Returns ***1*** if ***c*** is uppercase
* Returns ***0*** otherwise
FYI: The standard library provides a similar function: ***isupper***. Run ***man isupper*** to learn more.
```bash
pie@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
pie@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
pid@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
pie@ubuntu:~/0x04$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [0-isupper.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/0-isupper.c)



## 1. isdigit
Write a function that checks for a digit (0 through 9).
* Prototype: ***int _isdigit(int c);***
* Returns ***1*** if ***c*** is a digit
* Returns ***0*** otherwise
FYI: The standard library provides a similar function: ***isdigit***. Run ***man isdigit*** to learn more.
```bash
pie@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
pie@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
pie@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
pie@ubuntu:~/0x04$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [1-isdigit.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/1-isdigit.c)



## 2. Collaboration is multiplication

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [2-mul.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/2-mul.c)



## 3. The numbers speak for themselves

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [3-print_numbers.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/3-print_numbers.c)



## 4. I believe in numbers and signs 

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [4-print_most_numbers.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/4-print_most_numbers.c)



## 5. Numbers constitute the only universal language 

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [5-more_numbers.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/5-more_numbers.c)



## 6. The shortest distance between two points is a straight line

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [6-print_line.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/6-print_line.c)



## 7. I feel like I am diagonally parked in a parallel universe

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [7-print_diagonal.c7-print_diagonal.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/)



## 8. You are so much sunshine in every square inch 

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [8-print_square.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/8-print_square.c)



## 9. Fizz-Buzz

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [9-fizz_buzz.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/9-fizz_buzz.c)



## 10. Triangles 

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [10-print_triangle.c10-print_triangle.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/)



## 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [100-prime_factor.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/100-prime_factor.c)



## 12. Numbers have life; they're not just symbols on paper

```bash

```

Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x04-more_functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- File: [101-print_number.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops/101-print_number.c)



