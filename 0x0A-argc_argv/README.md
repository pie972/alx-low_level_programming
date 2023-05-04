# Low-level programming & Algorithm - Hatching out
# C - argc, argv



# Resources
--------------------------------------------------------------------------
## Read or watch:
[Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html) <br />
[argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html) <br />
[What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24) <br />
how to compile with unused variables <br />
<br /><br />



# Learning Objectives
--------------------------------------------------------------------------
## General
* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
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
* You are not allowed to use the standard library. Any use of functions like ***printf***, ***puts***, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/pie972/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/_putchar.c)
* The prototypes of all your functions and the prototype of the function ***_putchar*** should be included in your header file called ***main.h***
* You are allowed to use the standard library
<br /><br />



# Tasks
--------------------------------------------------------------------------
## 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
  pie@ubuntu:~/0x0A. argc, argv$ ./mynameis 
  ./mynameis
  pie@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
  pie@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
  ./mynewnameis
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [0-whatsmyname.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)<br />



## 1. Silence is argument carried out by other means 
Write a program that prints the number of arguments passed into it.
* Your program should print a number, followed by a new line
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
  pie@ubuntu:~/0x0A. argc, argv$ ./nargs 
  0
  pie@ubuntu:~/0x0A. argc, argv$ ./nargs hello
  1
  pie@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
  1
  pie@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
  2
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [1-args.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)<br />



## 2. The best argument against democracy is a five-minute conversation with the average voter 
Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
  pie@ubuntu:~/0x0A. argc, argv$ ./args 
  ./args
  pie@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
  ./args
  You
  can
  do
  anything,
  but
  not
  everything.
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [2-args.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)<br />



## 3. Neither irony nor sarcasm is argument 
Write a program that multiplies two numbers.
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print ***Error***, followed by a new line, and return ***1***
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
  pie@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
  6
  pie@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
  -6
  pie@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
  0
  pie@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
  795108790
  pie@ubuntu:~/0x0A. argc, argv$ ./mul
  Error
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [3-mul.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)<br />



## 4. To infinity and beyond 
Write a program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print ***0***, followed by a new line
* If one of the number contains symbols that are not digits, print ***Error***, followed by a new line, and return ***1***
* You can assume that numbers and the addition of all the numbers can be stored in an ***int***
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
  pie@ubuntu:~/0x0A. argc, argv$ ./add 1 1
  2
  pie@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
  1111
  pie@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
  Error
  pie@ubuntu:~/0x0A. argc, argv$ ./add
  0
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [4-add.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)<br />



## 5. Minimal Number of Coins for Change 
Write a program that prints the minimum number of coins to make change for an amount of money.
* Usage: ```./change cents```
* where ***cents*** is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly ***1***, print ***Error***, followed by a new line, and return ***1***
* you should use ***atoi*** to parse the parameter passed to your program
* If the number passed as the argument is negative, print ***0***, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
  ```bash
  pie@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
  pie@ubuntu:~/0x0A. argc, argv$ ./change 
  Error
  pie@ubuntu:~/0x0A. argc, argv$ ./change 10
  1
  pie@ubuntu:~/0x0A. argc, argv$ ./change 100
  4
  pie@ubuntu:~/0x0A. argc, argv$ ./change 101
  5
  pie@ubuntu:~/0x0A. argc, argv$ ./change 13
  3
  pie@ubuntu:~/0x0A. argc, argv$ 
  ```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x0A-argc_argv](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv)
- File: [100-change.c](https://github.com/pie972/alx-low_level_programming/blob/master/0x0A-argc_argv/100-change.c)<br />
