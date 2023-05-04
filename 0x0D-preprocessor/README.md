# Low-level programming & Algorithm - Hatching out
# C - Preprocessor



# Resources
--------------------------------------------------------------------------
## Read or watch:
[Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM) <br />
[Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros) <br />
[Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments) <br />
[Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak) <br />
[The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html) <br />
[Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros) <br />
[include guard](https://en.wikipedia.org/wiki/Include_guard) <br />
[Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros) <br />
<br /><br />



# Learning Objectives
--------------------------------------------------------------------------
## General
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files
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
* The only C standard library functions allowed are ***malloc***, ***free*** and ***exit***. Any use of functions like ***printf***, ***puts***, ***calloc***, ***realloc*** etc… is forbidden
* All your header files should be include guarded

## More Info
You do not have to learn about ```calloc``` and ```realloc```.
<br /><br />



# Tasks
--------------------------------------------------------------------------
## 0. Object-like Macro
Create a header file that defines a macro named ```SIZE``` as an abbreviation for the token ```1024```.
  ```bash
  pie@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
  #include "0-object_like_macro.h"
  #include "0-object_like_macro.h"
  #include <stdio.h>

  /**
   * main - check the code
   *
   * Return: Always 0.
   */
  int main(void)
  {
      int s;

      s = 98 + SIZE;
      printf("%d\n", s);
      return (0);
  }
  pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
  pie@ubuntu:~/0x0c. macro, structures$ ./a 
  1122
  pie@ubuntu:~/0x0c. macro, structures$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0D-preprocessor](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor)
- File: [0-object_like_macro.h](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)<br />



## 1. Pi 
Create a header file that defines a macro named ```PI``` as an abbreviation for the token ```3.14159265359```.
  ```bash
  pie@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
  #include "1-pi.h"
  #include "1-pi.h"
  #include <stdio.h>

  /**
   * main - check the code
   *
   * Return: Always 0.
   */
  int main(void)
  {
      float a;
      float r;

      r = 98;
      a = PI * r * r;
      printf("%.3f\n", a);
      return (0);
  }
  pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
  pie@ubuntu:~/0x0c. macro, structures$ ./b
  30171.855
  pie@ubuntu:~/0x0c. macro, structures$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0D-preprocessor](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor)
- File: [1-pi.h](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)<br />



## 2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.
* You are allowed to use the standard library
  ```bash
  pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
  pie@ubuntu:~/0x0c. macro, structures$ ./c 
  2-main.c
  pie@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
  pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
  pie@ubuntu:~/0x0c. macro, structures$ ./cc
  02-main.c
  pie@ubuntu:~/0x0c. macro, structures$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0D-preprocessor](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor)
- File: [2-main.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)<br />



## 3. Function-like macro 
Write a function-like macro ```ABS(x)``` that computes the absolute value of a number ```x```.
  ```bash
  pie@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
  #include <stdio.h>
  #include "3-function_like_macro.h"
  #include "3-function_like_macro.h"

  /**
   * main - check the code
   *
   * Return: Always 0.
   */
  int main(void)
  {
      int i;
      int j;

      i = ABS(-98) * 10;
      j = ABS(98) * 10;
      printf("%d, %d\n", i, j);
      return (0);
  }
  pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
  pie@ubuntu:~/0x0c. macro, structures$ ./d 
  980, 980
  pie@ubuntu:~/0x0c. macro, structures$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0D-preprocessor](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor)
- File: [3-function_like_macro.h](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)<br />



## 4. SUM
Write a function-like macro ```SUM(x, y)``` that computes the sum of the numbers ```x``` and ```y```.
```bash
pie@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
pie@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
pie@ubuntu:~/0x0c. macro, structures$ ./e 
1122
pie@ubuntu:~/0x0c. macro, structures$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0D-preprocessor](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor)
- File: [4-sum.h](https://github.com/pie972/alx-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)<br />
