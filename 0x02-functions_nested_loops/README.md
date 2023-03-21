# Resources
--------------------------------------------------------------------------
## Read or watch:
[Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss) <br />
[C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm) <br />
[Learning to Program in C (Part 06) (stop at 14:00)](https://www.youtube.com/watch?v=qMlnFwYdqIw) <br />
[What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/) <br />
[C - Header Files (stop before the “Once-Only Headers” paragraph)(https://www.tutorialspoint.com/cprogramming/c_header_files.htm) <br />



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
* You are allowed to use [_putchar](https://github.com/pie972/alx-low_level_programming/blob/master/0x02-functions_nested_loops/_putchar.c)
<br /><br />


# Tasks
--------------------------------------------------------------------------
## 0. _putchar
Write a program that prints ***_putchar***, followed by a new line.
* The program should return ***0***
```bash
pie@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
pie@ubuntu:~/0x02$ ./0-putchar 
_putchar
pie@ubuntu:~/0x02$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x02-functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
- File: [](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops/)
- File: [0-putchar.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops/0-putchar.c)


## 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.
* Prototype: ***void print_alphabet(void);***
* You can only use ***_putchar*** twice in your code
```bash
pie@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
pie@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
pie@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
pie@ubuntu:~/0x02$
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x02-functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
- File: [1-alphabet.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops/1-alphabet.c)


## 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Prototype: ***void print_alphabet_x10(void);***
* You can only use ***_putchar*** twice in your code
```bash
pie@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
pie@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
pie@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
pie@ubuntu:~/0x02$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x02-functions_nested_loops](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
- File: [2-print_alphabet_x10.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)

TO BE CONTINUED
