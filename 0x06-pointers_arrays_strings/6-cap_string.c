#include <stdio.h>

/**
 * *cap_string - the func to return a capped string
 * @str: this is the string to be capped
 * Return: returns a char
 */
char *cap_string(char *str)
{
int i;
int n = sizeof(*str) / sizeof(str[0]);
for (i = 0; i < n; i++)
{
if (i == 0 && str[i] != ' ' || str[i] != ' '
&& str[i - 1] == ' ' || str[i] != '\n'
&& str[i - 1] == '\n'  || str[i] != '\t' && str[i - 1] == '\t')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = (char)(('A' - 'a') + str[i]);
}
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = (char)(str[i] + ('a' - 'A'));
}
}
/* printf("After: %s\n", str); */
return (str);
}
