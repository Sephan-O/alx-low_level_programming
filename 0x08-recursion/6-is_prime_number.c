#include "main.h"

/**
 * is_prime_number - checks if n is a prime number
 * @n: number to check whether its prime
 * Return: returns an integer
 */
int is_prime_number(int n)
{
int i, flag = 0;
if (n == 0 || n == 1)
flag = 1;
for (i = 2; i <= n / 2; ++i)
{
if (n % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
return (1);
else
return (0);
}
