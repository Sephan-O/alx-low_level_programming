#include <string.h>
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string.
 * @n: This is the maximum number of characters to be appended.
 * Return: return a string
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
