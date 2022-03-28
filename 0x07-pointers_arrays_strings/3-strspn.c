#include <stdio.h>
#include <string.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: This is the main C string to be scanned.
 * @accept: The string containing the list of characters to match in s
 * Return: Returns an int
 */
unsigned int _strspn(char *s, char *accept)
{
int len;
len = strspn(s, accept);
return (len);
}
/* int main(void) */
/* { */
/*     char *s = "hello, world"; */
/*     char *f = "oleh"; */
/*     unsigned int n; */

/*     n = _strspn(s, f); */
/*     printf("%u\n", n); */
/*     return (0); */
/* } */
