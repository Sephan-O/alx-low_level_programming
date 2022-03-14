#include <stdio.h>

/**
 *main-this function prints out the alphabet
 *Return: It returns zero
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
{
printf("%c ", c);
}
putchar('\n');
return (0);
}
