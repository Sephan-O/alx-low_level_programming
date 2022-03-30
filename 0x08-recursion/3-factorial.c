#include "main.h"

/**
 * factorial - function that prints factorial of passed arg.
 * @n: number whose factorial is to be found
 * Return: retuns an int
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
