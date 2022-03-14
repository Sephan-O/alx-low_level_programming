#include <stdio.h>

/**
 *main-this function prints out the alphabet
 *Return: It returns zero
 */
int main(void)
{
char ch = 'a';
char cap = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cap <= 'Z')
{
putchar(cap);
cap++;
}
putchar('\n');
return (0);
}
