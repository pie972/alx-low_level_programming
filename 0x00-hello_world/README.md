# Low-level programming & Algorithm - Hatching out
# Concepts
--------------------------------------------------------------------------
[C programming](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230316%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230316T125109Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c1648b8cac27fdec220597003f9e08f15fa1999b75752ae51f729900ff856db8)
<br /><br />


# Resources
--------------------------------------------------------------------------
## Read or watch:
[Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230316%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230316T125142Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=bec1afc3c57df4fa0111d4a5b9a5e3766a6a0b841d84a3c00bd78b0d6da9b6fc) <br />
[Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie) <br />
[“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M) <br />
[Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc) <br />
[Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ) <br />
[Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU) <br />
[Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA) <br />
[Betty Coding Style](https://github.com/holbertonschool/Betty/wiki) <br />
[Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) <br />
[Linus Torvalds on C vs. C++ ](http://harmful.cat-v.org/software/c++/linus) <br />

## man or help:
* gcc
* printf (3)
* puts
* putchar



# Learning Objectives
--------------------------------------------------------------------------
## General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type _gcc main.c_
* What is an entry point
* What is _main_
* How to print text using _printf_, _puts_ and _putchar_
* How to get the size of a specific type using the unary operator _sizeof_
* How to compile using _gcc_
* What is the default program name when compiling with _gcc_
* What is the official C coding style and how to check your code with _betty-style_
* How to find the right header to include in your source code when using a standard library function
* How does the _main_ function influence the return value of the program
<br />


# Requirements
--------------------------------------------------------------------------
## C
* Allowed editors: _vi_, _vim_, _emacs_
* All your files will be compiled on Ubuntu 20.04 LTS using _gcc_, using the options _-Wall -Werror -Wextra -pedantic -std=gnu89_
* All your files should end with a new line
* There should be no errors and no warnings during compilation
* You are not allowed to use _system_
* Your code should use the _Betty_ style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
<br />


## Shell Scripts
* Allowed editors: _vi_, _vim_, _emacs_
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (_$ wc -l file_ should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly _#!/bin/bash_
<br /><br />


## More Info
### Betty linter
To run the Betty linter just with command *betty <filename>*:
* Go to the [Betty](https://github.com/holbertonschool/Betty) repository
* Clone the repo to your local machine
* _cd_ into the Betty directory
* Install the linter with _sudo ./install.sh_
* _emacs_ or _vi_ a new file called _betty_, and copy the script below:
```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
* Once saved, exit file and change permissions to apply to all users with _chmod a+x betty_
* Move the _betty_ file into _/bin/_ directory or somewhere else in your _$PATH_ with _sudo mv betty /bin/_
You can now type _betty <filename>_ to run the Betty linter!
<br /><br />


# Tasks
--------------------------------------------------------------------------
## 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable _$CFILE_
* The output should be saved in the file _c_
```bash
pie@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
pie@ubuntu:~/c/0x00$ export CFILE=main.c
pie@ubuntu:~/c/0x00$ ./0-preprocessor 
pie@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-system_engineering-devops](https://github.com/pie972/alx-system_engineering-devops)
- Directory: [0x00-shell_basics](https://github.com/pie972/alx-system_engineering-devops/tree/master/0x00-shell_basics)
- File: [0-preprocessor](https://github.com/pie972/alx-system_engineering-devops/blob/master/0x00-shell_basics/0-preprocessor)


## 1. Compiler
Write a script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
** Example: if the C file is main.c, the output file should be main.o
```bash
pie@ubuntu:~/c/0x00$ export CFILE=main.c
pie@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
pie@ubuntu:~/c/0x00$ ./1-compiler 
pie@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
pie@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-system_engineering-devops](https://github.com/pie972/alx-system_engineering-devops)
- Directory: [0x00-shell_basics](https://github.com/pie972/alx-system_engineering-devops/tree/master/0x00-shell_basics)
- File: [1-compiler](https://github.com/pie972/alx-system_engineering-devops/blob/master/0x00-shell_basics/1-compiler)


## 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable _$CFILE_
* The output file should be named the same as the C file, but with the extension _.s_ instead of _.c_.
** Example: if the C file is _main.c_, the output file should be _main.s_
```bash
pie@ubuntu:~/c/0x00$ export CFILE=main.c
pie@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
pie@ubuntu:~/c/0x00$ ./2-assembler
pie@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
pie@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-system_engineering-devops](https://github.com/pie972/alx-system_engineering-devops)
- Directory: [0x00-shell_basics](https://github.com/pie972/alx-system_engineering-devops/tree/master/0x00-shell_basics)
- File: [2-assembler](https://github.com/pie972/alx-system_engineering-devops/blob/master/0x00-shell_basics/2-assembler)


## 3. Name
Write a script that compiles a C file and creates an executable named _cisfun_.
* The C file name will be saved in the variable _$CFILE_
```bash
pie@ubuntu:~/c/0x00$ export CFILE=main.c
pie@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
pie@ubuntu:~/c/0x00$ ./3-name 
pie@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-system_engineering-devops](https://github.com/pie972/alx-system_engineering-devops)
- Directory: [0x00-shell_basics](https://github.com/pie972/alx-system_engineering-devops/tree/master/0x00-shell_basics)
- File: [3-name](https://github.com/pie972/alx-system_engineering-devops/blob/master/0x00-shell_basics/3-name)


## 4. Hello, puts
Write a C program that prints exactly _"Programming is like building a multilingual puzzle_, followed by a new line.
* Use the function _puts_
* You are not allowed to use _printf_
* Your program should end with the value _0_
```bash
pie@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
pie@ubuntu:~/c/0x00$ echo $?
0
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world)
- File: [4-puts.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world/4-puts.c)


## 5. Hello, printf
Write a C program that prints exactly _with proper grammar, but the outcome is a piece of art,_, followed by a new line.
* Use the function _printf_
* You are not allowed to use the function _puts_
* Your program should return _0_
* Your program should compile without warning when using the _-Wall gcc_ option
```bash
pie@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
pie@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
pie@ubuntu:~/c/0x00$ echo $?
0
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world)
- File: [5-printf.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world/5-printf.c)


## 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return _0_
* You might have to install the package _libc6-dev-i386_ on your Linux to test the _-m32 gcc_ option
```bash
pie@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
pie@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
pie@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
pie@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
pie@ubuntu:~/c/0x00$ echo $?
0
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world)
- File: [6-size.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world/6-size.c)


## 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable _$CFILE_.
* The output file should be named the same as the C file, but with the extension _.s_ instead of _.c_.
** Example: if the C file is _main.c_, the output file should be _main.s_
```bash
pie@ubuntu:~/c/0x00$ export CFILE=main.c
pie@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
pie@ubuntu:~/c/0x00$ ./100-intel 
pie@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
pie@ubuntu:~/c/0x00$ 
$
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world)
- File: [100-intel](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world/100-intel)


## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly _and that piece of art is useful" - Dora Korpar, 2015-10-19_, followed by a new line, to the standard error.
* You are not allowed to use any functions listed in the NAME section of the man (3) *printf* or man (3) *puts*
* Your program should return 1
* Your program should compile without any warnings when using the *-Wall gcc* option
```bash
pie@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
pie@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
pie@ubuntu:~/c/0x00$ echo $?
1
pie@ubuntu:~/c/0x00$ ./quote 2> q
pie@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
pie@ubuntu:~/c/0x00$ grep printf < 101-quote.c
pie@ubuntu:~/c/0x00$ grep put < 101-quote.c
pie@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: [alx-low_level_programming](https://github.com/pie972/alx-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world)
- File: [101-quote.c](https://github.com/pie972/alx-low_level_programming/tree/master/0x00-hello_world/101-quote.c)


