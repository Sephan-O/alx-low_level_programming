#include <stdio.h>
#include <string.h>

/**
 * *_strchr -  a function that locates a character in a string.
 * @s: is the C string to be scanned
 * @c: is the character to be searched in str
 * Return: returns a string
 */
char *_strchr(char *s, char c)
{
char *ret;
ret = strchr(s, c);
return (ret);
}
/* int main(void) */
/* { */
/*     char *s = "hello"; */
/*     char *f; */

/*     f = _strchr(s, 'l'); */

/*     if (f != NULL) */
/*     { */
/*         printf("%s\n", f); */
/*     } */
/*     return (0); */
/* } */
