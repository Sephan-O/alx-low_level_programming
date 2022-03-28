#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: returns a string
 */
char *_strpbrk(char *s, char *accept)
{
char *ret;
ret = strpbrk(s, accept);
return (ret);
}
/* int main(void) */
/* { */
/*     char *s = "hello, world"; */
/*     char *f = "world"; */
/*     char *t; */

/*     t = _strpbrk(s, f); */
/*     printf("%s\n", t); */
/*     return (0); */
/* } */
