#include "main.h"

/**
 * main-this function prints alphabet 10 times
 * Return: returns void
 */
void print_alphabet(void)
{
int i;
while (i < 10)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
