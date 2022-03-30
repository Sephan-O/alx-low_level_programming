#include "main.h"

/**
 * _pow_recursion - a func that finds pow of x to y using recursion
 * @x: the base number
 * @y: the power number
 * Return: returns an integer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1)
else
return (x * _pow_recursion(x, y - 1));
}
