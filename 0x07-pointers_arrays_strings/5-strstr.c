#include <stdio.h>
#include <string.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: main C string to be scanned
 * @needle: the small string to be searched with-in haystack string.
 * Return: returns a string
 */
char *_strstr(char *haystack, char *needle)
{
char *ret;
ret = strstr(haystack, needle);
return (ret);
}
/* int main(void) */
/* { */
/*     char *s = "hello, world"; */
/*     char *f = "world"; */
/*     char *t; */

/*     t = _strstr(s, f); */
/*     printf("%s\n", t); */
/*     return (0); */
/* } */
