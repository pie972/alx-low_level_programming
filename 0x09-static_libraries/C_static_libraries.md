# Build your own C static library

```bash
ubuntu@ip-172-31-63-244:~/pie$ l
total 44
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:46 print_char.o
ubuntu@ip-172-31-63-244:~/pie$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ubuntu@ip-172-31-63-244:~/pie$ l
total 68
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 1400 Mar 25 02:47 0-print_z.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 1-print_alphabet.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 2-print_tebahpla.o
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 1464 Mar 25 02:47 3-print_base16.o
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 1472 Mar 25 02:47 4-positive_or_not.o
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 2048 Mar 25 02:47 5-print_number.o
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:47 print_char.o
ubuntu@ip-172-31-63-244:~/pie$ ar -rc libschool.a *.o
ubuntu@ip-172-31-63-244:~/pie$ ar -t libschool.a
0-print_z.o
1-print_alphabet.o
2-print_tebahpla.o
3-print_base16.o
4-positive_or_not.o
5-print_number.o
print_char.o
ubuntu@ip-172-31-63-244:~/pie$ ranlib libschool.a
ubuntu@ip-172-31-63-244:~/pie$ cat main.c
void print_alphabet(void);

int main(void)
{
        print_alphabet();
        return (0);
}
ubuntu@ip-172-31-63-244:~/pie$ gcc main.c
/tmp/ccQa2r6L.o: In function `main':
main.c:(.text+0x5): undefined reference to `print_alphabet'
collect2: error: ld returned 1 exit status
ubuntu@ip-172-31-63-244:~/pie$ gcc main.c -L. -lschool -o alpha
ubuntu@ip-172-31-63-244:~/pie$ ./alpha
abcdefghijklmnopqrstuvwxyzubuntu
ubuntu@ip-172-31-63-244:~/pie$
```
 
## Read more
- man gcc
- man ar
- man ranlib
- [Google](https://www.google.com/search?q=C+static+libraries&gws_rd=ssl#q=C+static+libraries)
