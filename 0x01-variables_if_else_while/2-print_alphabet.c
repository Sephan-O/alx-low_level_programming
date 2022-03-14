#include <stdio.h>

/**
 *main-this function prints out the alphabet
 *Return: It returns zero
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
