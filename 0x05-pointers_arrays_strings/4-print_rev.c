#include <stdio.h>
#include<string.h>

/**
 * print_rev - Function that reverses a string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
int leng, i;
leng = strlen(s);
for (i = leng - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
