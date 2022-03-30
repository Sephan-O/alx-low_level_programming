#include "main.h"

/**
 * _print_rev_recursion - print in reverse using recursion
 * @s: string to be printed in reverse
 * Return: voids return nothing
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
