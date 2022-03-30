#include <stdio.h>
#include <math.h>

/**
 * _puts_recursion - A fucntion that prints string then new line
 *@s: the string to pe printed
 *Return: void does't return anything
 */
void _puts_recursion(char *s)
{
 puts(s);
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
