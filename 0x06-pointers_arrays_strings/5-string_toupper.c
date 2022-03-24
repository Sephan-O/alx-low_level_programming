#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - Function to convert string from lower to upper case
 * @s: The sring to be converted to uppercase
 * Return: returns the converted string.
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
/* int main(void) */
/* { */
/*     char str[] = "Look up!\n"; */
/*     char *ptr; */
/*     ptr = string_toupper(str); */
/*     printf("%s", ptr); */
/*     printf("%s", str); */
/*     return (0); */
/* } */
