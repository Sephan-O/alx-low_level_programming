#include <string.h>
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string.
 * Return: return a string
 */
char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
/* int main() */
/* { */
/*     char s1[98] = "Hello "; */
/*     char s2[] = "World!\n"; */
/*     char *ptr; */
/*     printf("%s\n", s1); */
/*     printf("%s", s2); */
/*     ptr = _strcat(s1, s2); */
/*     printf("%s", s1); */
/*     printf("%s", s2); */
/*     printf("%s", ptr); */
/*     return (0); */
/* } */
