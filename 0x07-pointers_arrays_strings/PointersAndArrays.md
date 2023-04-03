TO BE CONTINUED
# Pointers and arrays

Read this page, write down and test all the examples (do not copy-paste!).

## Pointers
![image](https://user-images.githubusercontent.com/78828566/229578820-d32861cd-179a-4ab0-90f3-e322d78d60d6.png)
***A pointer is a variable which contains a memory address.***

### Types and memory
Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.
Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:
* char -> 1 byte
* int -> 4 bytes
* float -> 4 bytes
To determine the size of those types on your computer, you can use the ```sizeof``` operator.
