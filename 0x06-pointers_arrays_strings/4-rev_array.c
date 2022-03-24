#include "main.h"

/**
 * reverse_array - this function reverses order of array elements.
 * @a: this is the array whose elements get re-ordered
 * @n: this is the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a [n - i - 1];
a[n - i - 1] = tmp;
}
for (i = 0; i < n; i++)
{
printf("%d%s ", a[i], (i == n - 1) ? "" : ",");
}
printf("\n");
}
