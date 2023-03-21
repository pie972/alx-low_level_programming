#include "main.h"
/**
* main - prints _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char s[] = "_putchar\n";
while (s[i])
{
_putchar (s[i]);
i++;
}
return (0);
}
