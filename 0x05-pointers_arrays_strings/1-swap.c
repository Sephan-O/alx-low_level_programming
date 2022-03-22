#include <stdio.h>

/**
 * swap_int - check the code
 * @a: the first paramter for swapping
 * @b: the second parameter for swapping
  */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
