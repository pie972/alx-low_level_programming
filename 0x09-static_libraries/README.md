# Low-level programming & Algorithm - Hatching out
# Static libraries



# Concepts
--------------------------------------------------------------------------
[C static libraries](https://github.com/pie972/alx-low_level_programming/blob/master/0x09-static_libraries/C_static_libraries.md) <br />
<br /><br />



# Resources
--------------------------------------------------------------------------
## Read or watch:
[What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html) <br />
[Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html) <br />
[Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html) <br />
[What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44) <br />

## man or watch
- ar
- ranlib
- nm
<br /><br />



# Learning Objectives
--------------------------------------------------------------------------
## General
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ***ar***, ***ranlib***, ***nm***
<br /><br />



# Requirements
--------------------------------------------------------------------------
## C
* Allowed editors: ***vi***, ***vim***, ***emacs***
* All your files will be compiled on Ubuntu 20.04 LTS using ***gcc***, using the options ***-Wall -Werror -Wextra -pedantic -std=gnu89***
* All your files should end with a new line
* Your code should use the ***Betty*** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like ***printf***, ***puts***, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/pie972/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/_putchar.c)
* The prototypes of all your functions and the prototype of the function ***_putchar*** should be included in your header file called ***main.h***

## Bash
* Allowed editors: ***vi***, ***vim***, ***emacs***
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line ([why?](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
* The first line of all your files should be exactly ```#!/bin/bash```
* All your files must be executable

## More Info
You do not need to learn about dynamic libraries, yet.
<br /><br />



# Tasks
--------------------------------------------------------------------------
## 0. A library is not a luxury but one of the necessities of life
Create the static library ```libmy.a``` containing all the functions listed below:
  ```bash
  int _putchar(char c);
  int _islower(int c);
  int _isalpha(int c);
  int _abs(int n);
  int _isupper(int c);
  int _isdigit(int c);
  int _strlen(char *s);
  void _puts(char *s);
  char *_strcpy(char *dest, char *src);
  int _atoi(char *s);
  char *_strcat(char *dest, char *src);
  char *_strncat(char *dest, char *src, int n);
  char *_strncpy(char *dest, char *src, int n);
  int _strcmp(char *s1, char *s2);
  char *_memset(char *s, char b, unsigned int n);
  char *_memcpy(char *dest, char *src, unsigned int n);
  char *_strchr(char *s, char c);
  unsigned int _strspn(char *s, char *accept);
  char *_strpbrk(char *s, char *accept);
  char *_strstr(char *haystack, char *needle);
  ```
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your ***main.h*** file to your repository. It should at least contain all the prototypes of the above functions.

  ```bash
  pie@ubuntu:~/0x09. Static Librairies$ ar -t libmy.a 
  _putchar.o
  _abs.o
  _atoi.o
  _isalpha.o
  _isdigit.o
  _islower.o
  _isupper.o
  _memcpy.o
  _memset.o
  _puts.o
  _strcat.o
  _strchr.o
  _strcmp.o
  _strcpy.o
  _strlen.o
  _strncat.o
  _strncpy.o
  _strpbrk.o
  _strspn.o
  _strstr.o
  pie@ubuntu:~/0x09. Static Librairies$ nm libmy.a 

  _putchar.o:
                   U _GLOBAL_OFFSET_TABLE_
  0000000000000000 T _putchar
                   U write

  _abs.o:
  0000000000000000 T _abs

  _atoi.o:
  0000000000000000 T _atoi

  _isalpha.o:
  0000000000000000 T _isalpha

  _isdigit.o:
  0000000000000000 T _isdigit

  _islower.o:
  0000000000000000 T _islower

  _isupper.o:
  0000000000000000 T _isupper

  _memcpy.o:
  0000000000000000 T _memcpy

  _memset.o:
  0000000000000000 T _memset

  _puts.o:
  0000000000000000 T _puts

  _strcat.o:
  0000000000000000 T _strcat
  
  _strchr.o:
  0000000000000000 T _strchr

  _strcmp.o:
  0000000000000000 T _strcmp

  _strcpy.o:
  0000000000000000 T _strcpy

  _strlen.o:
  0000000000000000 T _strlen

  _strncat.o:
  0000000000000000 T _strncat

  _strncpy.o:
  0000000000000000 T _strncpy

  _strpbrk.o:
  0000000000000000 T _strpbrk

  _strspn.o:
  0000000000000000 T _strspn

  _strstr.o:
  0000000000000000 T _strstr
  pie@ubuntu:~/0x09. Static Librairies$ cat main.c 
  #include "main.h"

  int main(void)
  {
      _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
      return (0);
  }
  pie@ubuntu:~/0x09. Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
  pie@ubuntu:~/0x09. Static Librairies$ ./quote 
  "At the end of the day, my goal was to be the best hacker"
      - Kevin Mitnick
  pie@ubuntu:~/0x09. Static Librairies$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x09-static_libraries](https://github.com/pie972/alx-low_level_programming/edit/master/0x09-static_libraries)
- File: [libmy.a](https://github.com/pie972/alx-low_level_programming/edit/master/0x09-static_libraries/libmy.a) ,[main.h](https://github.com/pie972/alx-low_level_programming/edit/master/0x09-static_libraries/main.h) <br />



## 1. Without libraries what have we? We have no past and no future
Create a script called ```create_static_lib.sh``` that creates a static library called ```liball.a``` from all the ```.c``` files that are in the current directory.
  ```bash
  pie@ubuntu:~/0x09. Static Librairies$ ls *.c
  _abs.c   _isalpha.c  _islower.c  main.c     _memset.c   _puts.c    _strchr.c  _strcpy.c  _strncat.c  _strpbrk.c  _strstr.c
  _atoi.c  _isdigit.c  _isupper.c  _memcpy.c  _putchar.c  _strcat.c  _strcmp.c  _strlen.c  _strncpy.c  _strspn.c
  pie@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
  pie@ubuntu:~/0x09. Static Librairies$ ls *.a
  liball.a  libmy.a
  pie@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
  _abs.o
  _atoi.o
  _isalpha.o
  _isdigit.o
  _islower.o
  _isupper.o
  main.o
  _memcpy.o
  _memset.o
  _putchar.o
  _puts.o
  _strcat.o
  _strchr.o
  _strcmp.o
  _strcpy.o
  _strlen.o
  _strncat.o
  _strncpy.o
  _strpbrk.o
  _strspn.o
  _strstr.o
  pie@ubuntu:~/0x09. Static Librairies$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x09-static_libraries](https://github.com/pie972/alx-low_level_programming/edit/master/0x09-static_libraries)
- File: [create_static_lib.sh](https://github.com/pie972/alx-low_level_programming/edit/master/0x09-static_libraries/create_static_lib.sh)<br />
















